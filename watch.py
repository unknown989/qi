import os
import tomli
import time
import subprocess

def run_cmd(cmd:str):
    try:
        print(subprocess.check_output(cmd,shell=True).decode("utf8"))
    except UnicodeDecodeError:
        print("ERROR: Command was run, but cannot decode output and print it. sorry :(")
def get_size(filename:str):
    return os.path.getsize(filename)
    

def main():
    config = tomli.load(open("./watchconf.toml","rb"))
    old_size = get_size(config["watch"]["file"])
    
    while True:
        try:
            new_size = get_size(config["watch"]["file"])
            
            if old_size != new_size:
                run_cmd(config["watch"]["command"])
            
            c = input("")
            if c == 'r':
                run_cmd(config["watch"]["command"])
            elif c == "c":
                run_cmd("clear")
            old_size = new_size
        except KeyboardInterrupt:
            break
        
        
if __name__ == "__main__":
    main()
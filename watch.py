import os
import tomli
import time
import subprocess

def run_cmd(cmd:str):
    print(subprocess.check_output(cmd,shell=True).decode("utf-8"))
def get_size(filename:str):
    return os.path.getsize(filename)
    

def main():
    config = tomli.load(open("./watchconf.toml","rb"))
    old_size = get_size(config["watch"]["file"])
    
    while True:
        try:
            c = input("")
            new_size = get_size(config["watch"]["file"])
            
            if old_size != new_size:
                run_cmd(config["watch"]["command"])
            
            if c == 'r':
                run_cmd(config["watch"]["command"])
                
            old_size = new_size
        except KeyboardInterrupt:
            break
        
        # time.sleep(1)
        
if __name__ == "__main__":
    main()
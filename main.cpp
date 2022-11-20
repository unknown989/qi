#include "include/utils.hpp"
#include "include/lexer.hpp"
int main(int argc, char** argv){
    if(argc != 2){
        LOG("Usage: " << argv[0] << " file.qi");
        return 1;
    }
    std::string filename = argv[1];
    Lexer lexer = Lexer();
    lexer.set_string(read_file_and_get_content(filename));
    lexer.lex();
    return 0;
}
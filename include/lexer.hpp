#include <string>
#include <vector>
#include "token.hpp"
class Lexer{
    private:
        std::string content;
        size_t cursor;
    public:
        Lexer();
        std::vector<Token> lex();
        void set_string(std::string content);
};
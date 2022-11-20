#include "../include/lexer.hpp"
#include "../include/utils.hpp"
#include <vector>

Lexer::Lexer() {}
void Lexer::set_string(std::string content) { this->content = content; }

std::vector<Token> Lexer::lex() {
  LOG(std::string("We're lexing this content\n\n") + this->content);
  return std::vector<Token>();
}
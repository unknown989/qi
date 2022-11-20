#include <string>

enum Tokens {
  IMPORT,
  VAR,
  ID,
  TYPE,
  EQUAL,
  NUMBER,
  DBLQUOTE,
  SNGQUOTE,
  BOOL,
  FLOAT,
  LESSTHAN,
  GREATERTHAN,
  STRUCT,
  FUNCTION,
  LPAREN,
  RPAREN,
  LBRACE,
  RBRACE,
  MINUS,
  PLUS,
  MULT,
  DIV,
  COMMA,
};

class Token {
private:
  Tokens token_type;
  std::string token_value;

public:
  Token();
  Token(Tokens token_type, std::string token_value)
      : token_type(token_type), token_value(token_value){}
};
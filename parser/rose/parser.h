/* This file was generated by SableCC (http://www.sablecc.org/). */

#ifndef __rose__parser_hh__
#define __rose__parser_hh__

#include <string>

namespace rose {

class Parser {
  enum Action {
    SHIFT = 0,
    REDUCE = 1,
    ACCEPT = 2,
    ERROR = 3
  };

public:
  Parser (Lexer *lexer, bool own_lexer = false);
  virtual ~Parser ();

  Start parse ();

private:
  Lexer *lexer;
  bool own_lexer;
};


class ParserException : public Exception {
public:
  inline ParserException (Token token, const std::string& msg) : Exception (msg), token(token) { }
  Token getToken () const { return token; }

private:
  Token token;
};

} // namespace rose {

#endif // !__rose__parser_hh__
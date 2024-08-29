//
// Created by loicp on 29/08/2024.
//

#ifndef CALCULATOR_PARSER_H
#define CALCULATOR_PARSER_H
#include "Lexer.h"


class Parser
{
private:
    std::vector<Token> tokens;
    int pos;
    std::vector<Token> ipn;

    void next();

    void expression();

	void sumdiff();

    void factor();
public:
    Parser(const std::vector<Token>& tokens) : tokens(tokens), pos(0), ipn() {}

    std::vector<Token> parse();
};

#endif //CALCULATOR_PARSER_H
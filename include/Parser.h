#pragma once
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
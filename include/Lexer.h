//
// Created by loicp on 29/08/2024.
//

#ifndef CALCULATOR_LEXER_H
#define CALCULATOR_LEXER_H
#include <iostream>
#include <vector>

enum class TokenType
{
	Value, Plus, Minus, Multiply, Divide, OpenParenthesis, CloseParenthesis
};


struct Token {
	TokenType type;
	std::string value;
};

class Lexer
{
private:
	std::string input;
	int pos;
public:
	Lexer(const std::string& input) : input(input), pos(0) {}

	std::vector<Token> createTokens();
};

#endif //CALCULATOR_LEXER_H
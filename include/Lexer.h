#pragma once
#include <iostream>
#include <vector>

enum class TokenType
{
	Value, Plus, Minus, Multiply, Divide
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
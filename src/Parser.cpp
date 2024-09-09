//
// Created by loicp on 29/08/2024.
//

#include "../include/Parser.h"

/*
 * Expression : SumDiff + SumDiff | SumDiff - SumDiff | SumDiff
 * Sumdiff : Factor * Factor | Factor / Factor | Factor
 * Factor : -Factor | (Expression) | Value
 */



void Parser::next()
{
    if (pos < tokens.size()-1) pos++;
}

void Parser::expression()
{
    sumdiff();
    while (tokens[pos].type == TokenType::Plus || tokens[pos].type == TokenType::Minus) 
    {
        Token op = tokens[pos];
        next();
		sumdiff();
        this->ipn.push_back(op);
	}
}

void Parser::sumdiff() {
    factor();
    while (tokens[pos].type == TokenType::Multiply || tokens[pos].type == TokenType::Divide) {
        Token op = tokens[pos];
        next();
        factor();
        this->ipn.push_back(op);
    }
}

void Parser::factor()
{
    if (tokens[pos].type == TokenType::Minus)
    {
        next();
        factor();
        this->ipn.push_back({TokenType::Value, "-1"});
        this->ipn.push_back({TokenType::Multiply, "*"});
    }
    else
    if (tokens[pos].type == TokenType::OpenParenthesis)
    {
        next();
        expression();
        if (tokens[pos].type == TokenType::CloseParenthesis) next();
        else
        {
            std::cerr << "Error: Missing closing parenthesis" << std::endl;
            exit(1);
        }
    }
    else if (tokens[pos].type == TokenType::Value)
    {
        this->ipn.push_back(tokens[pos]);
        next();
    }
    else
    {
	    std::cerr << "Error: Invalid token" << std::endl;
	    exit(1);
    }
}


std::vector<Token> Parser::parse() {
    std::cout << "Parser Started" << std::endl;
    this->ipn = std::vector<Token>();
    expression();
    std::cout <<  "Parser Finished" << std::endl;
    for (Token token : this->ipn) {
        std::cout << token.value;
    }
    std::cout << std::endl;
    return this->ipn;
}
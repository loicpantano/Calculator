#include "../include/Parser.h"

/*
 * Expression : SumDiff + SumDiff | SumDiff - SumDiff | SumDiff
 * Sumdiff : Value
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
        std::cout << op.value;
	}
}

void Parser::sumdiff()
{
    if (tokens[pos].type == TokenType::Value) 
    {
        std::cout << tokens[pos].value;
        next();
    }
    else
    {
	    std::cerr << "Error: Invalid token" << std::endl;
	    exit(1);
    }
}


void Parser::parse() {
    std::cout << "Parser Started" << std::endl;
    expression();
    std::cout << std::endl <<  "Parser Finished" << std::endl;
}
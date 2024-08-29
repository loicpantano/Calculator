#include "../include/Lexer.h"



std::vector<Token> Lexer::createTokens()
{
	std::cout << "Lexer Started" << std::endl;
	std::vector<Token> output;

	while(pos < input.size())
	{
		if (isspace(input[pos]))
		{
			pos++;
		}
		else if (isdigit(input[pos]))
		{
			std::string value;
			while (isdigit(input[pos]))
			{
				value += input[pos];
				pos++;
			}
			output.push_back({TokenType::Value, value});
		}
		else if (input[pos] == '+')
		{
			output.push_back({TokenType::Plus, "+"});
			pos++;
		}
		else if (input[pos] == '-')
		{
			output.push_back({TokenType::Minus, "-"});
			pos++;
		}
        else if (input[pos] == '*')
        {
            output.push_back({TokenType::Multiply, "*"});
            pos++;
        }
        else if (input[pos] == '/')
        {
            output.push_back({TokenType::Divide, "/"});
            pos++;
        }
        else if (input[pos] == '(')
        {
            output.push_back({TokenType::OpenParenthesis, "("});
            pos++;
        }
        else if (input[pos] == ')')
        {
            output.push_back({TokenType::CloseParenthesis, ")"});
            pos++;
        }
		else
		{
			std::cerr << "Error: Invalid character" << std::endl;
			exit(1);
		}
	}
	std::cout << "Lexer Finished" << std::endl;
	return output;
}
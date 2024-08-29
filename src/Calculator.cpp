#include "../include/Calculator.h"




void Calculator::inputText()
{
    std::string input;
    std::cin >> input;

    Lexer lexer(input);

    Parser parser(lexer.createTokens());

    parser.parse();
}






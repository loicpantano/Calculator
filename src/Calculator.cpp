//
// Created by loicp on 29/08/2024.
//

#include "../include/Calculator.h"




void Calculator::inputText()
{
    std::string input;
    std::cin >> input;

    Lexer lexer(input);

    Parser parser(lexer.createTokens());


    int res = IPNCalculator::calculate(parser.parse());
    std::cout << res << std::endl;
}






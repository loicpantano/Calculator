//
// Created by loicp on 29/08/2024.
//

#ifndef CALCULATOR_IPNCALCULATOR_H
#define CALCULATOR_IPNCALCULATOR_H
#include <vector>
#include "Lexer.h"

class IPNCalculator {
public:
    static int calculate(std::vector<Token> ipn);
};


#endif //CALCULATOR_IPNCALCULATOR_H

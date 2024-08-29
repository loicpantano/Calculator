//
// Created by loicp on 29/08/2024.
//

#include "IPNCalculator.h"

int IPNCalculator::calculate(std::vector<Token> ipn) {
    std::vector<int> vals;
    for(const Token& i : ipn) {
        if (i.type == TokenType::Value) {
            vals.push_back(std::stoi(i.value));
        } else {
            if (i.type == TokenType::Plus) {
                int size = vals.size();
                int tmp = vals.at(size - 1) + vals.at(size - 2);
                vals.pop_back();
                vals.pop_back();
                vals.push_back(tmp);
            } else if (i.type == TokenType::Multiply) {
                int size = vals.size();
                int tmp = vals.at(size - 1) * vals.at(size - 2);
                vals.pop_back();
                vals.pop_back();
                vals.push_back(tmp);
            } else if (i.type == TokenType::Minus) {
                int size = vals.size();
                int tmp = vals.at(size - 2) - vals.at(size - 1);
                vals.pop_back();
                vals.pop_back();
                vals.push_back(tmp);
            } else if (i.type == TokenType::Divide) {
                int size = vals.size();
                int tmp = vals.at(size - 2) / vals.at(size - 1);
                vals.pop_back();
                vals.pop_back();
                vals.push_back(tmp);
            }
        }
    }
    return vals.at(0);
}
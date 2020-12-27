// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program prints the string the number of times specified by the integer

#include <iostream>

int main() {
    // This program prints the string the number
    // of times specified by the integer

    std::string string;
    std::string integerStr;
    int integer;

    std::cout << "" << std::endl;
    std::cout << "String: ";
    std::cin >> string;
    std::cout << "Integer: ";
    std::cin >> integerStr;
    std::cout << "" << std::endl;

    try {
        integer = std::stoi(integerStr);
        if (integer > 0) {
            while (integer > 0, integer--)
                std::cout << string;
        } else {
            std::cout << "Please enter a positive"
                  " integer greater than 0" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}

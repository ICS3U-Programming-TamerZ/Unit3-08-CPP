// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer
// Date: Oct.20, 2022
// This program checks if a year is a leap year.

#include <iostream>

int main() {
    // Initializing year variables
    std::string userYearStr;
    int userYearInt;

    // Gets the user's year
    std::cout << "Enter a year\n";
    std::cout << ">> ";
    std::cin >> userYearStr;
    std::cout << "\n";

    // Tries casting the user's year to an integer
    try {
        userYearInt = std::stoi(userYearStr);

        // Program restarts if user's year could not be casted to an integer
    } catch (std::invalid_argument) {
        std::cout << "You must enter an integer.\n\n";
        return main();
    }

    // Checks if the user's year is divisible by 4
    if (userYearInt % 4 == 0) {
        // Checks if the user's year is divisible by 100
        if (userYearInt % 100 == 0) {
            // Checks if the user's year is divisible by 400
            if (userYearInt % 400 == 0) {
                std::cout << userYearInt << " is a leap year.\n";
                // Code executed if the user's year is not divisible by 400
            } else {
                std::cout << userYearInt << " is not a leap year\n.";
            }
            // Code executed if the user's year is not divisible by 100.
        } else {
            std::cout << userYearInt << " is a leap year.\n";
        }
        // Code executed if the user's age is not divisible by 4.
    } else {
        std::cout << userYearInt << " is not a leap year.\n";
    }
}

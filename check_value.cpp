#include <iostream>
#include "check_value.h"

int check_value(int target_value) {

    int current_value = 0;
    int count = 0;

    std::cout << "Enter your guess:" << std::endl;

    do {
        std::cin >> current_value;

        count++;

        if (current_value < target_value) {
            std::cout << "greater than " << current_value << std::endl;
        }
        else if (current_value > target_value) {
            std::cout << "less than " << current_value << std::endl;
        }
        else {
            std::cout << "you win!" << std::endl;
            break;
        }

    } while(true);

    return count;
}
#include <iostream>
#include <string>

#include <cstdlib>
#include <ctime>

#include "check_value.h"
#include "high_scores.h"

int main(int argc, char** argv) {

    int max_value = 100;

    if (argc > 0) {
        std::string arg1_value = argv[1];
        if (arg1_value == "-max") {
            if (argc < 3) {
                std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
                return -1;
            }
            max_value = std::stoi(argv[2]);
        }
    }

    // Ask about name
    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::string user_name;
    std::cin >> user_name;

    std::srand(std::time(nullptr)); // use current time as seed for random generator

    int random_value = std::rand() % max_value;

    int count = check_value(random_value);

    high_scores(count, user_name);

    return 0;
}
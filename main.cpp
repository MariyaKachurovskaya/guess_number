#include <iostream>
#include <string>

#include <cstdlib>
#include <ctime>

#include "check_value.h"
#include "high_scores.h"

int main(int argc, char** argv) {

    int max_value = 100;

    if (argc > 0) {
        std::string arg1_value = argv[0];
        if (arg1_value == "-max") {
            if (argc < 2) {
                std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
                return -1;
            }
            max_value = std::stoi(argv[1]);
        }
    }

    std::srand(std::time(nullptr)); // use current time as seed for random generator

    int random_value = std::rand() % max_value;

    int count = check_value(random_value);

    high_scores(count);

    std::cout << random_value << std::endl;

    return 0;
}
#include <iostream>
#include "cliparser.h"

CliParser::CliParser() {
    std::cout << "initializing constructor" << std::endl;
}


CliParser::~CliParser() {
    std:: cout << "destructing" << std::endl;
}

_Noreturn void CliParser::init() {
    {
        std::cout << "initializing cache" << std::endl;
        while (1) {
            std::cin.get();
        }
    }
};


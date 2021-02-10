#include "servicefactory.h"
#include <iostream>

ServiceFactory::ServiceFactory(){};

static services ServiceFactory::createServices() {
    services s = {
            new CliParser();
    };
    std::cout << "initializing services" << std::endl;
    return s;
}

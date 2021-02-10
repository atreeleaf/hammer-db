#include <iostream>
#include <string>
#include "services/cliparser.h"
#include "services/servicefactory.h"
using namespace std;

int main(int argc, char* argv[])
{
    services services;
    services.CliParser->init();
}

#include <iostream>
#include <string>
#include "services/cliparser.h"

using namespace std;

int main(int argc, char* argv[])
{
    CliParser* parser = new CliParser();
    parser->init();
}

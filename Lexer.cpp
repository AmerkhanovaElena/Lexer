#include <iostream>
#include <fstream>
#include "CLexer.h"

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cout << "Incorrect number of arguments\nUsage: lexer.exe [input file name] [output file name]\n";
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    std::ofstream outputFile(argv[2]);

    if (!inputFile.is_open())
    {
        std::cout << "Can't open file\n";
        return 1;
    }

    CLexer lexer(inputFile, outputFile);
    lexer.Run();
    return 0;
}
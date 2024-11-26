/*
 * Simple C++ example program
 */
#include "config.h"

#include <iostream>

int main (int argc, char **argv)
{
    std::cout << "Hello World (v" << PACKAGE_VERSION << ")" << std::endl;

    return (EXIT_SUCCESS);
}


/*
 * Simple C++ example program
 */
#include "config.h"

#include "foo_internal.h"
#include "foo.h"

#include <iostream>

int main (int argc, char **argv)
{
    std::cout << "FOOMAIN Hello World (v" << PACKAGE_VERSION << ")" << std::endl;

    std::cout << "XFOO_MAGIC_NUM: " << XFOO_MAGIC_NUM << std::endl; // private
    std::cout << "FOO_MAX_NUM: "    << FOO_MAX_NUM   << std::endl;  // public

    return (EXIT_SUCCESS);
}


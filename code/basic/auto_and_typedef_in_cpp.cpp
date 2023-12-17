#include <iostream>

int main()
{

    typedef unsigned short int ushort;

    auto isCPlusPlusGood = true; // C++ is good, automatically type is decided by compiler

    ushort latestVersionOfCpp = 23;

    std::cout << "is C++ Good ? " << (isCPlusPlusGood ? " Yes" : "No") << std::endl;

    std::cout << "Latest Version of C++ is called C++" << latestVersionOfCpp << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    int cppVersion = 23;

    int array[4] = {0, 1, 2, 3};

    int *ptrToCppVersion = &cppVersion;

    std::cout << "cppVersion variable is stored at : " << &cppVersion << std::endl;

    std::cout << "ptrToCppVersion pointer : " << ptrToCppVersion << std::endl;

    return 0;
}
#include <iostream>

// This function takes two integers and returns their sum.
constexpr int getSum(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int main()
{
    // Define a shorter alias for "unsigned short int".
    typedef unsigned short int ushort;

    // Store the number of laptops.
    const ushort laptops = 10;

    // Store the number of desktops.
    const ushort desktops = 20;

    // Find the total number of computers by adding laptops and desktops.
    const ushort totalComputers = getSum(laptops, desktops);

    // Print the total number of computers.
    std::cout << "Total computers: " << totalComputers << std::endl;

    return 0;
}

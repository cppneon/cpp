#include <iostream>

int main()
{

    std::cout << "This progarm will help you multiply two numbers : " << std::endl;

    std::cout << "Enter First Number : ";

    unsigned short int firstNumber = 0;

    std::cin >> firstNumber;

    std::cout << "\nEnter Second Number";

    unsigned short int secondNumber = 0;

    std::cin >> secondNumber;

    std::cout << "\n"
              << firstNumber << " * " << secondNumber << " = ";

    std::cout << (firstNumber * secondNumber) << std::endl;

    return 0;
}
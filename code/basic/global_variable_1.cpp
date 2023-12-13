#include <iostream>

void sumTwoNumber()
{
    std::cout << "this program helps you sum of two numbers" << std::endl;

    unsigned short int firstNumber = 0;

    unsigned short int secondNumber = 0;

    std::cout << "Enter First Number : ";

    std::cin >> firstNumber;

    std::cout << "\nEnter Second Number : ";

    std::cin >> secondNumber;

    std::cout << "The Result of " << firstNumber << " + " << secondNumber << " = ";

    std::cout << (firstNumber + secondNumber) << std::endl;
}

int main()
{

    sumTwoNumber();
    return 0;
}
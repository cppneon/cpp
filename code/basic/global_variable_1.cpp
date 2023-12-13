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

    // std::cout<<"First Number = " << firstNumber << std::endl;

    // std::cout<<"Second Number = " << secondNumber <<std::endl;

    // if i uncomment above lines the main function will generate an error

    /*

    variable firstNumber and secondNumber are locally created variable withint

    sumTwoNumber() function so they are not known outside of its scope

    main does not know anything about these variables

    */
    return 0;
}
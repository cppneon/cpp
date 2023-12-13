#include <iostream>

// Global variables for storing user input
unsigned short int firstNumber = 0;
unsigned short int secondNumber = 0;

void multiplyTwoNumbers()
{
    // Welcome message and prompts for user input
    std::cout << "This program will help you multiply two numbers: " << std::endl;
    std::cout << "Enter First Number: ";
    std::cin >> firstNumber;
    std::cout << "\nEnter Second Number: ";
    std::cin >> secondNumber;

    // Calculate and display the multiplication result
    std::cout << "Multiplication Result of " << firstNumber << " * " << secondNumber;
    std::cout << " = " << (firstNumber * secondNumber) << std::endl;
}

int main()
{
    // Call the function to multiply numbers
    multiplyTwoNumbers();

    // Access and print the globally stored values
    std::cout << "\nFirst Number: " << firstNumber;
    std::cout << "\nSecond Number: " << secondNumber << std::endl;

    // Update the global variables with new user input
    std::cout << "\nEnter New Value for firstNumber: ";
    std::cin >> firstNumber;
    std::cout << "\nEnter New Value for secondNumber: ";
    std::cin >> secondNumber;

    // Confirm the updated values
    std::cout << "\nFirst Number: " << firstNumber;
    std::cout << "\nSecond Number: " << secondNumber << std::endl;

    return 0;
}

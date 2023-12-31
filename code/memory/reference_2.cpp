#include <iostream>

// Function to calculate the square of a number using a reference parameter
void getSquare(unsigned &inputNumber)
{
    // Directly modify the inputNumber variable through the reference
    inputNumber *= inputNumber; // More concise way of squaring
}

int main()
{

    // Declare a variable to store user input
    unsigned int userInput = 0;

    // Prompt the user to enter a value
    std::cout << "Enter the value you want to get the square of: ";
    std::cin >> userInput;

    // Call the getSquare function to calculate the square
    getSquare(userInput); // Pass the variable by reference

    // Print the calculated square
    std::cout << "Square is: " << userInput << std::endl;

    return 0; // Indicate successful program execution
}

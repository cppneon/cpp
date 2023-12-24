#include <iostream> // Include header for input/output operations

// Main function
int main()
{

    // Declare an unsigned short integer variable to store the current year
    unsigned short int currentYear = 2023;

    // Declare a pointer to an unsigned short integer and initialize it with the address of currentYear
    unsigned short int *pointer = &currentYear;

// year label: Used for jump control with goto
year:

    // Print the current year
    std::cout << "Current Year is: " << currentYear << std::endl;

    // Prompt the user to enter a new year
    std::cout << "Enter New Year: ";

    // Declare a variable to store the user's input
    unsigned short int inputYear = 0;

    // Read the user's input
    std::cin >> inputYear;

    // Validate the input year
    if (inputYear >= 2023 && inputYear <= 2999)
    {
        // If the input is valid, update the current year using the pointer
        *pointer = inputYear;
    }
    else
    {
        // If the input is invalid, display an error message and jump back to the year label
        std::cout << "You Entered Wrong Date" << std::endl;
        goto year;
    }

    // Print the entered year (which is now the same as currentYear due to pointer update)
    std::cout << "Entered Year is: " << inputYear << std::endl;

    // Return 0 to indicate successful program execution
    return 0;
}

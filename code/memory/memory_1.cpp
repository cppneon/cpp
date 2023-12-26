#include <iostream> // Include header for input/output operations

int main()
{

    // Dynamically allocate memory for an unsigned short int:
    unsigned short int *currentYear = new unsigned short int;

    // Prompt user for input:
    std::cout << "Enter Current Year: ";
    std::cin >> *currentYear; // Store input in the allocated memory

    // Display the entered year:
    std::cout << "\nCurrent Year is: " << *currentYear << std::endl;

    // Release the allocated memory:
    delete currentYear;

    return 0; // Indicate successful program termination
}

#include <iostream> // Include header for input/output operations

int main()
{

    // Get user input for array size:
    std::cout << "How many numbers do you want to store in array? ";
    unsigned short int userInput = 0;
    std::cin >> userInput;

    // Dynamically allocate memory for the array:
    unsigned short int *array = new unsigned short int[userInput];

    // Inform user about array creation:
    std::cout << "Array of " << userInput << " elements has been created." << std::endl;

    // Get user input for each array element:
    for (unsigned short int index = 0; index < userInput; index++)
    {
        std::cout << "Enter Number for " << index << " Array element: ";
        std::cin >> *(array + index); // Store input in array element
    }

    // Print the array elements:
    std::cout << "\nArray elements:" << std::endl;
    for (unsigned short int index = 0; index < userInput; index++)
    {
        std::cout << "array [" << index << "] = " << array[index] << std::endl;
    }

    // Release the allocated memory:
    delete[] array;

    return 0; // Indicate successful program termination
}

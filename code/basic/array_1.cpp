#include <iostream> // This line includes the library for input/output operations.

int main()
{
    // Declaring a constant `length` for the array size (10).
    const unsigned short int length = 10;

    // Creating an array `array` of `length` elements with type `unsigned short int` and initializing it with values from 1 to 10.
    unsigned short int array[length] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Looping through the array `array` using a `for` loop and printing each element with its index (starting from 1).
    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "[" << index + 1 << "] = " << array[index] << std::endl;
    }

    // Prompting the user to enter an index to change the data.
    std::cout << "Enter number of index to change data : ";

    // Reading the user-entered index into the variable `index`.
    unsigned short int index = 0;
    std::cin >> index;

    // Error checking: if the entered index is out of bounds, display an error message and exit.
    if (index < 0 || index >= length)
    {
        std::cerr << "Error: Invalid index entered." << std::endl;
        return 1;
    }

    // Prompting the user to enter a new value.
    std::cout << "\nEnter New Value : ";

    // Reading the user-entered value into the variable `value`.
    unsigned short int value = 0;
    std::cin >> value;

    // Updating the element at the specified index with the new value.
    array[index] = value;

    // Separator to visually differentiate sections.
    std::cout << "===============================================" << std::endl;

    // Looping through the array again and printing the updated values.
    for (unsigned short int index = 0; index < length; index++)
    {
        std::cout << "[" << index + 1 << "] = " << array[index] << std::endl;
    }

    return 0; // Returning exit code 0 to indicate successful execution.
}

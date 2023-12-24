#include <iostream>  // Include header for input/output operations

// Main function
int main() {

    // Declare an integer variable cppVersion and initialize it to 23
    int cppVersion = 23;

    // Declare an integer array with 4 elements and initialize it with values 0, 1, 2, 3
    int array[4] = {0, 1, 2, 3};

    // Declare a pointer to an integer and initialize it with the address of cppVersion
    int *ptrToCppVersion = &cppVersion;

    // Print the memory address of cppVersion
    std::cout << "cppVersion variable is stored at: " << &cppVersion << std::endl;

    // Print the value of the pointer ptrToCppVersion (which holds the address of cppVersion)
    std::cout << "ptrToCppVersion pointer: " << ptrToCppVersion << std::endl;

    // Dereference the pointer to print the value of cppVersion
    std::cout << "Value of cppVersion variable is: " << *ptrToCppVersion << std::endl;

    // Print the memory address of the array
    std::cout << "array is located at: " << &array << std::endl;

    // Create a pointer to the first element of the array
    int *ptrToArray = array;

    // Print the memory address of ptrToArray (which points to the beginning of the array)
    std::cout << "ptrToArray is at: " << ptrToArray << std::endl;

    // Use a range-based for loop to iterate through the array elements
    for (unsigned short int index : array) {
        // Access and print each array element using pointer arithmetic
        std::cout << "Number: " << index << " := " << *(ptrToArray + index) << std::endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}

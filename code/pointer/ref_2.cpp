#include <iostream>  // Include header for input/output operations

// Main function
int main() {

    // Declare two unsigned short integer variables to store spaceship counts
    unsigned short int totalSpaceShips = 34;
    unsigned short int totalAlienSpaceShips = 58;

    // Declare a pointer to an unsigned short integer
    unsigned short int *pointer;

    // Initially, point the pointer to the totalSpaceShips variable
    pointer = &totalSpaceShips;

    // Print information about the pointer and the variable it points to
    std::cout << "pointer points to totalSpaceShips variable" << std::endl;
    std::cout << "&totalSpaceShips variable is located at: " << &totalSpaceShips << std::endl;  // Location of the variable
    std::cout << "pointer is pointed at: " << pointer << std::endl;  // Value of the pointer (memory address)
    std::cout << "value of *pointer is: " << *pointer << " and totalSpaceShip: " << totalSpaceShips << std::endl;  // Accessing the value through the pointer

    // Print a separator for clarity
    std::cout << "================================================" << std::endl;

    // Now, make the pointer point to the totalAlienSpaceShips variable
    std::cout << "pointer points to totalAlienSpaceShips" << std::endl;
    pointer = &totalAlienSpaceShips;

    // Print similar information about the new pointer-variable relationship
    std::cout << "&totalAlienSpaceShips located at: " << &totalAlienSpaceShips << std::endl;
    std::cout << "pointer is pointed at: " << pointer << std::endl;
    std::cout << "value of *pointer is: " << *pointer << " and totalAlienSpaceShips: " << totalAlienSpaceShips << std::endl;

    // Return 0 to indicate successful program execution
    return 0;
}

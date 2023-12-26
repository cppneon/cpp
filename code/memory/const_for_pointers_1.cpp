#include <iostream>

int main()
{

    // Declare and initialize a variable for the current year:
    int currentYear = 2023;

    // Declare a constant pointer to an integer, pointing to the current year:
    int *const constantPointerToCurrentYear = &currentYear;
    // Note: The pointer itself is constant, but the value it points to can be changed.

    // Attempt to change the pointer to point to a different variable (will fail):
    // constantPointerToCurrentYear = &upcomingYear;  // Error: Cannot change a constant pointer

    // Change the value of the current year through the pointer:
    *constantPointerToCurrentYear = 2023; // This is allowed because the data is not constant

    std::cout << "Current Year is  : " << *constantPointerToCurrentYear << std::endl;

    std::cout << "=====================" << std::endl;

    // Declare a pointer to a constant integer:
    const int *pointerToConstantNumber = &currentYear;
    // Note: The value pointed to is constant, but the pointer itself can be changed.

    // Attempt to change the value pointed to (will fail):
    // *pointerToConstantNumber = 2025;  // Error: Cannot change a constant value

    // Change the pointer to point to a different variable:
    pointerToConstantNumber = &currentYear; // This is allowed because the pointer itself is not constant

    std::cout << "=====================" << std::endl;

    // Declare a constant pointer to a constant integer:
    const int *const constantPointerToConstantYear = &currentYear;
    // Note: Both the pointer and the value it points to are constant.

    // Neither the pointer nor the value can be changed:
    // constantPointerToConstantYear = &upcomingYear;  // Error: Cannot change a constant pointer
    // *constantPointerToConstantYear = 2024;         // Error: Cannot change a constant value

    return 0;
}

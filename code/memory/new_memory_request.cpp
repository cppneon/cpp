#include <iostream>

// Declare the std namespace for convenience
using namespace std;

int main()
{

    // Global variable to store user-provided array size
    unsigned long long int userInput = 0;

requestNewMemory: // Label for retrying memory allocation

    // Prompt the user to specify the desired array size
    cout << "How many Elements do you want to create for array? ";
    cin >> userInput;

    // Attempt to allocate memory for the array, avoiding exceptions
    unsigned short int *userArray = new (nothrow) unsigned short int[userInput];

    if (userArray)
    { // Check if allocation succeeded
        cout << "Array of " << userInput << " elements has been created" << endl;

        // Immediately deallocate the memory
        delete[] userArray;

        cout << "Allocated memory freed" << endl;
    }
    else
    { // Handle allocation failure
        cout << "Memory allocation failed for " << userInput << " elements of array" << endl;
        cout << "Try Again" << endl;

        // Jump back to the requestNewMemory label for a retry
        goto requestNewMemory;
    }

    return 0; // Indicate successful program execution
}

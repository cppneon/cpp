#include <iostream>

// Declare the std namespace for convenience
using namespace std;

int main()
{

// Label for a point in the code where memory allocation is requested
requestForMemory:

    // Prompt the user to specify the desired array size
    cout << "How many elements of an array do you want to create? ";

    // Variable to store the user-provided array size
    unsigned long long int userInput = 0;

    // Read the user's input
    cin >> userInput;

    try
    {

        // Attempt to dynamically allocate memory for the array
        int *largeMemoryRequest = new int[userInput];

        // Report successful allocation
        cout << "Memory Allocation successful" << endl;

        // Deallocate the memory when it's no longer needed
        delete[] largeMemoryRequest;

        // Acknowledge deallocation
        cout << "Allocated memory for " << userInput << " elements has been deleted" << endl;
    }
    catch (bad_alloc)
    {

        // Handle memory allocation failure
        cout << "Memory Allocation Failed" << endl;
        cout << "Try Again " << endl;

        // Repeat the allocation attempt
        goto requestForMemory;
    }

    // Indicate successful program execution
    return 0;
}

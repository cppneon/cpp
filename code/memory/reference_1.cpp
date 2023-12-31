#include <iostream>

using namespace std;

int main()
{

    // Declare and initialize a variable named "number" with the value 100
    unsigned short int number = 100;

    // Create a reference to "number" named "reference"
    unsigned short int &reference = number;

    // Print information about both variables
    cout << "Variable 'number': " << endl;
    cout << "  - Contains value: " << number << endl;
    cout << "  - Located at memory address: " << &number << endl;

    cout << "\nVariable 'reference' (alias of 'number'): " << endl;
    cout << "  - Contains value: " << reference << endl;             // Accessing through reference
    cout << "  - Located at memory address: " << &reference << endl; // Same address as 'number'

    return 0;
}

#include <iostream> // Include header for input/output operations

using namespace std; // Use the std namespace for convenience

// Class to represent a person with basic information
class Person
{
private:
    // Use a larger data type for potential age ranges:
    int age;         // Person's age
    string fullName; // Person's full name

public:
    // Default constructor: Prompt for full name
    Person()
    {
        cout << "Please set the full name for the Person through invoking method setName(): ";
        age = 0;
        genderID = gender::other; // Neutral default
    }

    // Parameterized constructor: Initialize name and print creation message
    Person(string inputName) : fullName(inputName)
    {
        cout << "Person named " << inputName << " has been created." << endl;
    }

    // Enum to represent gender options (expand for inclusivity)
    enum class gender
    {
        female,
        male,
        nonbinary,
        other
    };

    gender genderID; // Person's gender using the defined enum

    // Methods to modify person's attributes
    void setAge(int inputAge)
    {
        if (inputAge < 0)
        { // Input validation for age
            cout << "Error: Age cannot be negative." << endl;
            return; // Avoid setting invalid age
        }
        age = inputAge;
    }

    void setGender(gender inputGender)
    {
        genderID = inputGender;
    }

    void setName(string inputName)
    {
        fullName = inputName;
    }

    // Method to print person's details with improved formatting
    void getDetails()
    {
        cout << fullName << " is " << age << " years old and is ";
        cout << (genderID == gender::female ? "a kind" : "a reliable") << " person." << endl;
    }

    // Static method to print a separator for better output organization
    static void separater()
    {
        cout << "================================" << endl;
    }
};

int main()
{ // Entry point of the program
    // Create Person objects
    Person pruthviraj("Pruthviraj");
    pruthviraj.setAge(22);
    pruthviraj.setGender(Person::gender::male);

    Person sofia("Sofia");
    sofia.setAge(32);
    sofia.setGender(Person::gender::female);

    Person robot; // Using default constructor for user input
    robot.setName("Robot");
    robot.setAge(0);
    robot.setGender(Person::gender::nonbinary);

    // Print details of each person with separators
    pruthviraj.getDetails();
    Person::separater();

    sofia.getDetails();
    Person::separater();

    robot.getDetails();
    Person::separater();

    return 0; // Indicate successful program termination
}

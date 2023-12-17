#include <iostream>

int main()
{

    // Short summary of variables:
    // * Oceans: Number of Earth's oceans
    // * Temp Antarctica: Average temperature in Antarctica
    // * C++ love: Is C++ a good language?
    // * Exam grade: My latest exam grade
    // * My name: My full name
    // * Earth's gravity: Gravitational acceleration on Earth
    // * Price: A random price to demonstrate precision

    const unsigned short int totalOceansOnEarth = 4; // # of Earth's oceans

    std::cout << "There are " << totalOceansOnEarth << " oceans on Earth." << std::endl;

    const signed short int tempratureOfAntarctica = -45; // Avg temp in Antarctica (brrr!)

    std::cout << "The average temperature in Antarctica is " << tempratureOfAntarctica << "°C." << std::endl;

    const bool isCppGood = true; // Is C++ a good language? You decide!

    std::cout << "Do I think C++ is good? " << (isCppGood ? "Absolutely!" : "Well...") << std::endl;

    const char myExamGrade = 'a'; // My latest exam grade (hopefully!)

    std::cout << "My latest exam grade was an " << myExamGrade << "." << std::endl;

    const std::string myName = "Chauhan Pruthviraj"; // My full name

    std::cout << "My name is " << myName << "." << std::endl;

    const float gravitationalAccelerationForceOnEarth = 9.8; // Earth's gravity

    std::cout << "The gravitational acceleration on Earth is " << gravitationalAccelerationForceOnEarth << " m/s²." << std::endl;

    const double price = 99.958454; // Random price with high precision

    std::cout << "This random price costs $" << price << "." << std::endl;

    return 0;
}

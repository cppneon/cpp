#include <iostream>

int main()
{
    // Integer to store your age
    int myAge = 26; // Currently, you are 26 years old!

    // Antarctica's temperature is unlikely to be positive, so use unsigned short int.
    unsigned short int temperatureAtAntarctica = -45; // Brrr, it's currently -45 degrees Celsius!

    // Gravitational acceleration requires high precision so use a double.
    double gravitationalAccelerationOnEarth = 9.8; // Earth's gravity pulls at 9.8 m/s^2.

    // Boolean to represent your opinion on C++
    bool isCppGood = true; // Do you think C++ is good? Change this to reflect your opinion!

    // String to store a sentence
    std::string myQuote = "The best way to predict the future is to create it. - Abraham Lincoln";

        // Use setlocale to enable wider character support for printing wchar_t
    std::setlocale(LC_ALL, "");

    // Print the values with descriptive messages
    std::cout << "My age is: " << myAge << std::endl;
    std::cout << "Temperature at Antarctica: " << temperatureAtAntarctica << " degrees Celsius" << std::endl;
    std::cout << "Gravitational acceleration on Earth: " << gravitationalAccelerationOnEarth << " m/s^2" << std::endl;
    std::cout << "Do you think C++ is good? " << (isCppGood ? "Yes!" : "No, not really.") << std::endl;
    std::cout << "My favorite quote: " << myQuote << std::endl;

    // Don't forget to return 0 from the main function
    return 0;
}

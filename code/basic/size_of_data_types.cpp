#include <iostream>

int main()
{
    // Print a header for the output
    std::cout << "The size of built-in variable types in bytes:" << std::endl;

    // Unsigned short integer (typically 2 bytes)
    std::cout << "short = " << sizeof(unsigned short int) << " bytes (for non-negative numbers)" << std::endl;

    // Standard integer (typically 4 bytes)
    std::cout << "int = " << sizeof(int) << " bytes (for whole numbers)" << std::endl;

    // Long integer (typically 8 bytes)
    std::cout << "long int = " << sizeof(long int) << " bytes (for larger whole numbers)" << std::endl;

    // Long long integer (typically 8 bytes on most platforms)
    std::cout << "long long = " << sizeof(long long int) << " bytes (for very large whole numbers)" << std::endl;

    // Double-precision floating-point number (typically 8 bytes)
    std::cout << "double = " << sizeof(double) << " bytes (for high-precision decimals)" << std::endl;

    // Single-precision floating-point number (typically 4 bytes)
    std::cout << "float = " << sizeof(float) << " bytes (for less precise decimals)" << std::endl;

    // Single character (typically 1 byte)
    std::cout << "char = " << sizeof(char) << " byte (for a single character)" << std::endl;

    // Boolean value (true or false)
    std::cout << "bool = " << sizeof(bool) << " byte (for true/false values)" << std::endl;

    // String type (variable size depending on content)
    std::cout << "String = " << sizeof(std::string) << " bytes (minimum size, actual size depends on string content)" << std::endl;

    return 0;
}

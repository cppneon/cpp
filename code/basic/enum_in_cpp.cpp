#include <iostream>

enum cities
{
    delhi = 1, // Capital of India
    mumbai,    // Financial capital of India
    bangaluru, // IT hub of India
    chennai,   // Cultural capital of South India
    hyderabad, // City of Pearls
    ahmedabad, // Textile city
    pune,      // Oxford of the East
    surat,     // Diamond city
    kolkata    // City of Joy
};

int main()
{
    cities myCity = cities::surat; // Assigning Surat city to 'myCity'

    std::cout << "My city is : " << (myCity == 8 ? " Surat" : " Unknown") << std::endl;

    return 0;
}

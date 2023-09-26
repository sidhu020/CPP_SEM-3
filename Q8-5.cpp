// 40. Write a C++ Program Using Formatting with manipulators.

#include <iostream>
#include <iomanip> // Required for manipulators

int main() {
    int integerNumber = 12345;
    double doubleNumber = 1234.56789;

    // Set the output to display 2 decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Display an integer with leading zeros and a total width of 10 characters
    std::cout << "Integer: " << std::setw(10) << std::setfill('0') << integerNumber << std::endl;

    // Display a double with a total width of 15 characters and right alignment
    std::cout << "Double: " << std::setw(15) << std::setfill(' ') << std::right << doubleNumber << std::endl;

    // Reset formatting to default
    std::cout << std::defaultfloat << std::setw(0);

    return 0;
}

/*

=:OUTPUT:=

Integer: 0000012345
Double:         1234.57

*/

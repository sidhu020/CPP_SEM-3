// 39. Write a program using setf ( ) function to print a text on left justified using width ( ) function and fill the remaining space with fill ( ) function.

#include <iostream>
#include <iomanip>

int main() {
    // Set the fill character
    char fillChar = '-';

    // Set the width for left justification
    int width = 20;

    std::string text = "Hello, World!";

    // Use setf() to set the left justification flag
    std::cout.setf(std::ios::left);

    // Use width() to set the width of the output
    std::cout.width(width);

    // Use fill() to set the fill character
    std::cout.fill(fillChar);

    // Print the text
    std::cout << text << std::endl;

    return 0;
}

/*

=:OUTPUT:=

Hello, World!-------

*/

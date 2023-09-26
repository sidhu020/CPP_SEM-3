// 36. Write a program using get (char) function with parameters.

#include <iostream>

// Define a function that takes a character as a parameter
void processCharacter(char ch) {
    if (isalpha(ch)) {
        std::cout << "'" << ch << "' is an alphabetic character." << std::endl;
    } else if (isdigit(ch)) {
        std::cout << "'" << ch << "' is a digit." << std::endl;
    } else {
        std::cout << "'" << ch << "' is a special character or space." << std::endl;
    }
}

int main() {
    char inputChar;

    std::cout << "Enter a single character: ";
    std::cin >> inputChar;

    // Check if the input is a single character
    if (std::cin.good() && inputChar != '\n') {
        // Call the function with the input character as a parameter
        processCharacter(inputChar);
    } else {
        std::cout << "Please enter a single character." << std::endl;
    }

    return 0;
}

/*

=:OUTPUT:=

Enter a single character: S
'S' is an alphabetic character.

*/

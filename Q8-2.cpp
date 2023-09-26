// 37. Write a program using put ( ) function with parameters.

#include <iostream>
#include <cctype> // for isalpha and isdigit

// Define a function that takes a character as a parameter
void processCharacter(char ch) {
    if (std::isalpha(ch)) {
        std::cout << "'" << ch << "' is an alphabetic character." << std::endl;
    } else if (std::isdigit(ch)) {
        std::cout << "'" << ch << "' is a digit." << std::endl;
    } else {
        std::cout << "'" << ch << "' is a special character or space." << std::endl;
    }
}

int main() {
    char inputChar;

    std::cout << "Enter a single character: ";
    inputChar = std::getchar(); // Read a character using getchar

    // Check if the input is a single character
    if (inputChar != '\n' && inputChar != EOF) {
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

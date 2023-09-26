// 38. Write a program using getline ( ) and write ( ) functions.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file for writing
    std::ofstream outputFile("output.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open the output file." << std::endl;
        return 1;
    }

    std::string inputLine;

    // Prompt the user for input
    std::cout << "Enter some text (type 'exit' to quit):" << std::endl;

    while (true) {
        // Read a line of text from the user
        std::getline(std::cin, inputLine);

        // Check if the user wants to exit
        if (inputLine == "exit") {
            break;
        }

        // Write the input line to the output file
        outputFile.write(inputLine.c_str(), inputLine.length());
        outputFile.put('\n'); // Add a newline character

        std::cout << "Line written to the file." << std::endl;
    }

    // Close the output file
    outputFile.close();

    std::cout << "File 'output.txt' has been created with your input." << std::endl;

    return 0;
}

/*

=:OUTPUT:=

Enter some text (type 'exit' to quit):
Abc
Line written to the file.
Def
Line written to the file.
Gef
Line written to the file.
exit
File 'output.txt' has been created with your input.

*/

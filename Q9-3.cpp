// 43. Write a C++ Program using file opening mode.

#include <iostream>
#include <fstream>

int main() {
    // Specify the file name
    const char* filename = "example.txt";

    // Open the file in write mode (out)
    std::ofstream outputFile(filename, std::ios::out);

    // Check if the file is open
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return 1;
    }

    // Write data to the file
    outputFile << "This is a line of text." << std::endl;
    outputFile << "This is another line of text." << std::endl;

    // Close the file
    outputFile.close();

    // Open the file in read mode (in)
    std::ifstream inputFile(filename, std::ios::in);

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file for reading." << std::endl;
        return 1;
    }

    // Read and print the contents of the file
    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}

/*

=:OUTPUT:=
This is a line of text.
This is another line of text.

*/

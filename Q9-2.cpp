// 42. Write a C++ program using Opening a File using open () function.

#include <iostream>
#include <fstream>

int main() {
    // Specify the file name
    const char* filename = "example.txt";

    // Create an ifstream object
    std::ifstream inputFile;

    // Open the file using the open() function
    inputFile.open(filename);

    // Check if the file is open
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
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

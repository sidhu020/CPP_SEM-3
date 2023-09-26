// 41. Write a C++ program using Opening a File using a Constructor.

#include <iostream>
#include <fstream>

int main() {
    // Specify the file name
    const char* filename = "example.txt";

    // Open the file for reading using the constructor of std::ifstream
    std::ifstream inputFile(filename);

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

    // Close the file (not necessary since it will be automatically closed when inputFile goes out of scope)

    return 0;
}

/*

=:OUTPUT:=
Failed to open the file.

*/

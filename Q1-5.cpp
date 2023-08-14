// 5. Write a program Using Scope Resolution Operators.

#include <iostream>

using namespace std;

// Define a global variable
int globalVar = 10;

// Define a class
class MyClass {
public:
    static int classVar; // Static class variable

    void display() {
        cout << "Class variable: " << classVar << endl;
        cout << "Global variable: " << ::globalVar << endl; // Using scope resolution to access global variable
    }
};

// Initialize the static class variable
int MyClass::classVar = 20;

int main() {
    MyClass obj;
    obj.display();

    return 0;
}

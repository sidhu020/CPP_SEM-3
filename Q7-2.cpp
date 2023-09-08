// 32. Write a C++ program using Pointer to derived class.

#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    // Create a Dog object and a pointer to it
    Dog myDog;
    Dog* ptrDog = &myDog;

    // Access and call functions using the pointer
    ptrDog->eat();  // Call eat() from the base class
    ptrDog->bark(); // Call bark() from the derived class

    return 0;
}

/*
OUTPUT

Animal is eating.
Dog is barking.

*/

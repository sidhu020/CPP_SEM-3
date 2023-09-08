// 35. Write a C++ program to demonstrate run time polymorphism.

#include <iostream>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        std::cout << "Animal makes a generic sound." << std::endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        std::cout << "Dog barks: Woof! Woof!" << std::endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        std::cout << "Cat meows: Meow! Meow!" << std::endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog myDog;
    Cat myCat;

    animalPtr = &myDog;
    animalPtr->makeSound(); // Calls Dog's makeSound()

    animalPtr = &myCat;
    animalPtr->makeSound(); // Calls Cat's makeSound()

    return 0;
}


/*

OUTPUT

Dog barks: Woof! Woof!
Cat meows: Meow! Meow!

*/

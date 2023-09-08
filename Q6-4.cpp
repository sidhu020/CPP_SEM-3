// 29. Write a C++ program using Virtual Base Class.

#include <iostream>

// Virtual Base Class
class Animal {
public:
    Animal(const std::string& name) : name(name) {}

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }

    void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    }

public:
    std::string name;
};

// Derived classes
class Cat : public virtual Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    void meow() {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

class Dog : public virtual Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void bark() {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Diamond Inheritance
class Pet : public Cat, public Dog {
public:
    Pet(const std::string& name) : Animal(name), Cat(name), Dog(name) {}

    void play() {
        std::cout << "Playing with " << name << "." << std::endl;
    }
};

int main() {
    Pet myPet("Tommy");
    myPet.eat();    // Accessing eat() from Animal
    myPet.sleep();  // Accessing sleep() from Animal
    myPet.meow();   // Accessing meow() from Cat
    myPet.bark();   // Accessing bark() from Dog
    myPet.play();   // Accessing play() from Pet

    return 0;
}

/*
OUTPUT

Tommy is eating.
Tommy is sleeping.
Meow! Meow!
Woof! Woof!
Playing with Tommy.

*/

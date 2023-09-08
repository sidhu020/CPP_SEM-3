// 27. Write a C++ program to demonstrate Hierarchical Inheritance.

#include <iostream>

// Base class
class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started." << std::endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void accelerate() {
        std::cout << "Car is accelerating." << std::endl;
    }
};

// Derived class 2
class Bicycle : public Vehicle {
public:
    void pedal() {
        std::cout << "Bicycle is pedaling." << std::endl;
    }
};

int main() {
    Car myCar;
    Bicycle myBicycle;

    myCar.start();       // Call start() from Vehicle (base class)
    myCar.accelerate();  // Call accelerate() from Car (derived class)

    myBicycle.start();   // Call start() from Vehicle (base class)
    myBicycle.pedal();   // Call pedal() from Bicycle (derived class)

    return 0;
}

/* OUTPUT

Vehicle started.
Car is accelerating.
Vehicle started.
Bicycle is pedaling.

*/

// 28. Write a C++ program to demonstrate Hybrid Inheritance.

#include <iostream>

// Base class 1
class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started." << std::endl;
    }
};

// Base class 2
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class 1 inheriting from Vehicle
class Car : public Vehicle {
public:
    void accelerate() {
        std::cout << "Car is accelerating." << std::endl;
    }
};

// Derived class 2 inheriting from Vehicle
class Bicycle : public Vehicle {
public:
    void pedal() {
        std::cout << "Bicycle is pedaling." << std::endl;
    }
};

// Derived class inheriting from Animal and Car
class HybridCar : public Animal, public Car {
public:
    void ecoMode() {
        std::cout << "HybridCar is in eco mode." << std::endl;
    }
};

int main() {
    Car myCar;
    Bicycle myBicycle;
    HybridCar myHybridCar;

    myCar.start();
    myCar.accelerate();

    myBicycle.start();
    myBicycle.pedal();

    myHybridCar.start();    // Ambiguous call, as both Animal and Car have a 'start' method
    myHybridCar.accelerate(); // Call accelerate() from Car
    myHybridCar.eat();       // Call eat() from Animal
    myHybridCar.ecoMode();


    return 0;
}

/*
OUTPUT


Vehicle started.
Car is accelerating.
Vehicle started.
Bicycle is pedaling.
Vehicle started.
Car is accelerating.
Animal is eating.
HybridCar is in eco mode.

*/

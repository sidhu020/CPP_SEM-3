// 34. Write a C++ program using pure virtual function.

#include <iostream>

// Abstract base class with a pure virtual function
class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function

    // A non-virtual function
    void displayInfo() const {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return 3.14159265359 * radius * radius;
    }

    void displayInfo() const {
        std::cout << "This is a circle with radius " << radius << "." << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return length * width;
    }

    void displayInfo() const {
        std::cout << "This is a rectangle with length " << length << " and width " << width << "." << std::endl;
    }
};

int main() {
    // Array of Shape pointers
    Shape* shapes[2];

    // Create instances of Circle and Rectangle
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        shapes[i]->displayInfo(); // Polymorphic call to displayInfo()
        std::cout << "Area: " << shapes[i]->calculateArea() << " square units" << std::endl;
        delete shapes[i]; // Free the allocated memory
    }

    return 0;
}

/*

OUTPUT

This is a shape.
Area: 78.5398 square units
This is a shape.
Area: 24 square units

*/

// 30. Write a C++ program using Abstract Class.

#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159265359 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shapePtr = &circle;
    std::cout << "Circle Area: " << shapePtr->calculateArea() << std::endl;

    shapePtr = &rectangle;
    std::cout << "Rectangle Area: " << shapePtr->calculateArea() << std::endl;

    return 0;
}

/*
OUTPUT


Circle Area: 78.5398
Rectangle Area: 24
*/

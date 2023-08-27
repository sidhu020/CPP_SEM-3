// 23. Write a C++ program to create Operator overloading using friend function.
#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}

    // Declare the friend function inside the class
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);

    void display() {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

// Define the friend function outside the class
Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int den = f1.denominator * f2.denominator;
    return Fraction(num, den);
}

int main() {
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction sum = fraction1 + fraction2;

    std::cout << "Fraction 1: ";
    fraction1.display();

    std::cout << "Fraction 2: ";
    fraction2.display();

    std::cout << "Sum: ";
    sum.display();

    return 0;
}

/*
Fraction 1: 1/2
Fraction 2: 3/4
Sum: 10/8
*/

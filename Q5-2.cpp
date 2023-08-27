    //22. Write a C++ program using Overloading Binary operator.
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        Complex result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2;

    std::cout << "Num1: ";
    num1.display();

    std::cout << "Num2: ";
    num2.display();

    std::cout << "Sum: ";
    sum.display();

    return 0;
}

/*
Num1: 3 + 4i
Num2: 1.5 + 2.5i
Sum: 4.5 + 6.5i
*/

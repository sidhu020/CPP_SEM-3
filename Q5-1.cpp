// 21. Write a C++ program using Overloading unary operator.

#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    // Overload the unary + operator
    Number operator-() {
        return Number(value);
    }
};

int main() {
    Number num(5);
    Number result = -num;

    cout << "Original Value: " << num.getValue() << endl;
    cout << "Value after unary + operator: " << result.getValue() << endl;

    return 0;
}

/*
Original Value: 5
Value after unary + operator: 5
*/


// 33. Write a C++ program to demonstrate this pointer.

#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(value) {}

    void printData() {
        std::cout << "Data: " << this->data << std::endl;
    }

    // A member function that compares the data of two objects using "this"
    bool isEqual(MyClass other) {
        return this->data == other.data;
    }

private:
    int data;
};

int main() {
    MyClass obj1(42);
    MyClass obj2(42);
    MyClass obj3(10);

    obj1.printData();
    obj2.printData();
    obj3.printData();

    if (obj1.isEqual(obj2)) {
        std::cout << "obj1 and obj2 have equal data." << std::endl;
    } else {
        std::cout << "obj1 and obj2 do not have equal data." << std::endl;
    }

    if (obj1.isEqual(obj3)) {
        std::cout << "obj1 and obj3 have equal data." << std::endl;
    } else {
        std::cout << "obj1 and obj3 do not have equal data." << std::endl;
    }

    return 0;
}


/*

OUTPUT

Data: 42
Data: 42
Data: 10
obj1 and obj2 have equal data.
obj1 and obj3 do not have equal data.

*/

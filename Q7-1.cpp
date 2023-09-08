// 31. Write a C++ program to demonstrate pointers to object.

#include <iostream>
#include <string>

class Student {
public:
    Student(const std::string& name, int age) : name(name), age(age) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // Create objects of the Student class
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Create pointers to Student objects
    Student* ptrStudent1 = &student1;
    Student* ptrStudent2 = &student2;

    // Access and display object data using pointers
    std::cout << "Student 1: ";
    ptrStudent1->displayInfo();

    std::cout << "Student 2: ";
    ptrStudent2->displayInfo();

    return 0;
}

/*
OUTPUT

Student 1: Name: Alice, Age: 20
Student 2: Name: Bob, Age: 22

*/

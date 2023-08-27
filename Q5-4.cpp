// 24. Write a C++ program to create Single inheritance public derivation.
#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    int studentId;

public:
    Student(const std::string& n, int a, int id) : Person(n, a), studentId(id) {}

    void displayStudent() {
        display();
        std::cout << "Student ID: " << studentId << std::endl;
    }
};

int main() {
    Student student("Alice", 20, 12345);
    student.displayStudent();

    return 0;
}

/*
Name: Alice, Age: 20
Student ID: 12345
*/

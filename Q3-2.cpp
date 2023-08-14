// 12. Write a Program Using class.

#include <iostream>
#include <string>

using namespace std;

// Define the class for a student
class Student {
public:
    string name;
    int roll_no;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

int main() {
    Student student;

    cout << "Enter student information:\n";
    student.input();

    cout << "\nStudent information:\n";
    student.display();

    return 0;
}

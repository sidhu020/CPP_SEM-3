// 15. Write a Program Using array of object.

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
    const int numStudents = 3;
    Student students[numStudents]; // Array of Student objects

    // Input student records
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
    }

    // Display student records
    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].display();
        cout << endl;
    }

    return 0;
}

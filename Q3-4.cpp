// 14. Write a Program Using arrays within a class.

#include <iostream>
#include <string>

using namespace std;

// Define the class for a student
class Student {
public:
    string name;
    int roll_no;
};

int main() {
    const int numStudents = 3;
    Student students[numStudents]; // Array of Student objects

    // Input student records
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> students[i].roll_no;
    }

    // Display student records
    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << " - Name: " << students[i].name
             << ", Roll Number: " << students[i].roll_no << endl;
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Define the structure for a student
struct Student {
    string name;
    int roll_no;
};

int main() {
    const int numStudents = 3;  // You can change this value to the number of students you want to store

    // Declare an array of Student structures
    Student students[numStudents];

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

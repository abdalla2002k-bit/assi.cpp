#include "student.h"

Student students[100];
int totalStudents = 0;

// Add Student
void addStudent() {
    cout << "\nEnter Student ID: ";
    cin >> students[totalStudents].id;

    cout << "Enter Student Name: ";
    cin >> students[totalStudents].name;

    cout << "Enter Student Age: ";
    cin >> students[totalStudents].age;

    cout << "Enter Student Course: ";
    cin >> students[totalStudents].course;

    totalStudents++;

    cout << "Student Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (totalStudents == 0) {
        cout << "\nNo students available.\n";
        return;
    }

    cout << "\n--- Student List ---\n";

    for (int i = 0; i < totalStudents; i++) {
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "-------------------\n";
    }
}

// Search Student
void searchStudent() {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Search: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++) {
        if (students[i].id == id) {
            cout << "\nStudent Found:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student Not Found.\n";
    }
}

// Update Student
void updateStudent() {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Update: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++) {
        if (students[i].id == id) {

            cout << "Enter New Name: ";
            cin >> students[i].name;

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Course: ";
            cin >> students[i].course;

            cout << "Student Updated Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student Not Found.\n";
    }
}

// Delete Student
void deleteStudent() {
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Delete: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++) {

        if (students[i].id == id) {

            for (int j = i; j < totalStudents - 1; j++) {
                students[j] = students[j + 1];
            }

            totalStudents--;

            cout << "Student Deleted Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student Not Found.\n";
    }
}
#include "student.h"

int main() {

    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}
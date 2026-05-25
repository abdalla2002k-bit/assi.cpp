#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore Swapping:" << endl;
    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "\nAfter Swapping:" << endl;
    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    return 0;
}
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif
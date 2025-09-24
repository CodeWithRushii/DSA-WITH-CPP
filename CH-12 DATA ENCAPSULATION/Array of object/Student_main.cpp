#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{

    int choice;
    cout << endl;
    cout << "Enter the number of students: ";
    cin >> choice;
    Student s[choice]; // Array of students

    cout << endl;

    // Input for students
    cout << "Enter details of student:" << endl
         << endl;
    for (int i = 0; i < choice; i++)
    {
        cout << "Student No " << (i + 1) << ":" << endl
             << endl;
        s[i].setStudentInfo();
        cout << endl;
    }

    cout << endl;

    //  output for student 
    cout << "Student Records:" << endl
         << endl;
    for (int i = 0; i < choice; i++)
    {
        cout << "Student No " << (i + 1) << ":" << endl
             << endl;
        s[i].getStudentInfo();
        cout << endl;
    }

    return 0;
}

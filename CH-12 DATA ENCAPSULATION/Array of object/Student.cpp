#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string college;

public:

    //setter
    void setStudentInfo(){
        cout << "Enter Student ID: ";
        cin >> this->id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, this->name);

        cout << "Enter Age: ";
        cin >> this->age;
        cin.ignore();

        cout << "Enter Course: ";
        getline(cin, this->course);

        cout << "Enter City: ";
        getline(cin, this->city);

        cout << "Enter Email: ";
        getline(cin, this->email);

        cout << "Enter College: ";
        getline(cin, this->college);
    }

    // Getter method to display details
    void getStudentInfo(){
        cout << "Student ID\t: " << this->id << endl;
        cout << "Name\t\t: " << this->name << endl;
        cout << "Age\t\t: " << this->age << endl;
        cout << "Course\t\t: " << this->course << endl;
        cout << "City\t\t: " << this->city << endl;
        cout << "Email\t\t: " << this->email << endl;
        cout << "College\t\t: " << this->college << endl;
    }
};
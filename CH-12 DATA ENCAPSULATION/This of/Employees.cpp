#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;
    string role;

public:
    // Setter
    void setEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> this->id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, this->name);
        cout << "Enter Employee Salary: ";
        cin >> this->salary;
        cin.ignore();
        cout << "Enter Employee Role: ";
        getline(cin, this->role);   
    }
    // Getter
    void getEmployeeDetails()
    {
        cout << "Employee ID: \t\t" << this->id << endl;
        cout << "Employee Name: \t\t" << this->name << endl;
        cout << "Employee Salary: \t" << this->salary << endl;
        cout << "Employee Role: \t\t" << this->role << endl;
    }
};
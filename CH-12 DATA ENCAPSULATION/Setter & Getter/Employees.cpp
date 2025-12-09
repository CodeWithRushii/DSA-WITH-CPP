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
        cin >> id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        // cin >> name;
        // gets(name);
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cin.ignore();
        cout << "Enter Employee Role: ";
        getline(cin, role);
        // cin >> role;
        // gets(role);
    }
    // Getter
    void getEmployeeDetails()
    {
        cout << "Employee ID: \t\t" << id << endl;
        cout << "Employee Name: \t\t" << name << endl;
        cout << "Employee Salary: \t" << salary << endl;
        cout << "Employee Role: \t\t" << role << endl;
    }
};
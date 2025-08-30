#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    char name[20];
    int age;
    char role[20];
    int salary;
    char city[20];
    int experience;
    char company_name[20];
};

int main()
{
    cout << "Employee Details" << endl
         << endl;

    Employee emp1;
    Employee emp2;
    Employee emp3;
    Employee emp4;
    Employee emp5;

    // Employee 1
    cout << "Enter Employee 1 Details" << endl
         << endl;
    cout << "Enter Employee ID: ";
    cin >> emp1.id;
    cout << "Enter Employee Name: ";
    cin >> emp1.name;
    cout << "Enter Employee Age: ";
    cin >> emp1.age;
    cout << "Enter Employee Role: ";
    cin >> emp1.role;
    cout << "Enter Employee Salary: ";
    cin >> emp1.salary;
    cout << "Enter Employee City: ";
    cin >> emp1.city;
    cout << "Enter Employee Experience year: ";
    cin >> emp1.experience;
    cout << "Enter Employee Company Name: ";
    cin >> emp1.company_name;
    cout << endl;

    // Employee 2
    cout << "Enter Employee 2 Details" << endl
         << endl;
    cout << "Enter Employee ID: ";
    cin >> emp2.id;
    cout << "Enter Employee Name: ";
    cin >> emp2.name;
    cout << "Enter Employee Age: ";
    cin >> emp2.age;
    cout << "Enter Employee Role: ";
    cin >> emp2.role;
    cout << "Enter Employee Salary: ";
    cin >> emp2.salary;
    cout << "Enter Employee City: ";
    cin >> emp2.city;
    cout << "Enter Employee Experience year: ";
    cin >> emp2.experience;
    cout << "Enter Employee Company Name: ";
    cin >> emp2.company_name;
    cout << endl;

    // Employee 3
    cout << "Enter Employee 3 Details" << endl
         << endl;
    cout << "Enter Employee ID: ";
    cin >> emp3.id;
    cout << "Enter Employee Name: ";
    cin >> emp3.name;
    cout << "Enter Employee Age: ";
    cin >> emp3.age;
    cout << "Enter Employee Role: ";
    cin >> emp3.role;
    cout << "Enter Employee Salary: ";
    cin >> emp3.salary;
    cout << "Enter Employee City: ";
    cin >> emp3.city;
    cout << "Enter Employee Experience year: ";
    cin >> emp3.experience;
    cout << "Enter Employee Company Name: ";
    cin >> emp3.company_name;
    cout << endl;

    // Employee 4
    cout << "Enter Employee 4 Details" << endl
         << endl;
    cout << "Enter Employee ID: ";
    cin >> emp4.id;
    cout << "Enter Employee Name: ";
    cin >> emp4.name;
    cout << "Enter Employee Age: ";
    cin >> emp4.age;
    cout << "Enter Employee Role: ";
    cin >> emp4.role;
    cout << "Enter Employee Salary: ";
    cin >> emp4.salary;
    cout << "Enter Employee City: ";
    cin >> emp4.city;
    cout << "Enter Employee Experience year: ";
    cin >> emp4.experience;
    cout << "Enter Employee Company Name: ";
    cin >> emp4.company_name;
    cout << endl;

    // Employee 5
    cout << "Enter Employee 5 Details" << endl
         << endl;
    cout << "Enter Employee ID: ";
    cin >> emp5.id;
    cout << "Enter Employee Name: ";
    cin >> emp5.name;
    cout << "Enter Employee Age: ";
    cin >> emp5.age;
    cout << "Enter Employee Role: ";
    cin >> emp5.role;
    cout << "Enter Employee Salary: ";
    cin >> emp5.salary;
    cout << "Enter Employee City: ";
    cin >> emp5.city;
    cout << "Enter Employee Experience year: ";
    cin >> emp5.experience;
    cout << "Enter Employee Company Name: ";
    cin >> emp5.company_name;
    cout << endl;

    cout << "Employee Details Output" << endl
         << endl;

    // Employee 1
    cout << "employee id\t\t: " << emp1.id << endl;
    cout << "employee name\t\t: " << emp1.name << endl;
    cout << "employee age\t\t: " << emp1.age << endl;
    cout << "employee role\t\t: " << emp1.role << endl;
    cout << "employee salary\t\t: " << emp1.salary << endl;
    cout << "employee city\t\t: " << emp1.city << endl;
    cout << "employee experience\t: " << emp1.experience << " years" << endl;
    cout << "employee company name\t: " << emp1.company_name << endl
         << endl;

    // Employee 2
    cout << "employee id\t\t: " << emp2.id << endl;
    cout << "employee name\t\t: " << emp2.name << endl;
    cout << "employee age\t\t: " << emp2.age << endl;
    cout << "employee role\t\t: " << emp2.role << endl;
    cout << "employee salary\t\t: " << emp2.salary << endl;
    cout << "employee city\t\t: " << emp2.city << endl;
    cout << "employee experience\t: " << emp2.experience << " years" << endl;
    cout << "employee company name\t: " << emp2.company_name << endl
         << endl;

    // Employee 3
    cout << "employee id\t\t: " << emp3.id << endl;
    cout << "employee name\t\t: " << emp3.name << endl;
    cout << "employee age\t\t: " << emp3.age << endl;
    cout << "employee role\t\t: " << emp3.role << endl;
    cout << "employee salary\t\t: " << emp3.salary << endl;
    cout << "employee city\t\t: " << emp3.city << endl;
    cout << "employee experience\t: " << emp3.experience << " years" << endl;
    cout << "employee company name\t: " << emp3.company_name << endl
         << endl;

    // Employee 4
    cout << "employee id\t\t: " << emp4.id << endl;
    cout << "employee name\t\t: " << emp4.name << endl;
    cout << "employee age\t\t: " << emp4.age << endl;
    cout << "employee role\t\t: " << emp4.role << endl;
    cout << "employee salary\t\t: " << emp4.salary << endl;
    cout << "employee city\t\t: " << emp4.city << endl;
    cout << "employee experience\t: " << emp4.experience << " years" << endl;
    cout << "employee company name\t: " << emp4.company_name << endl
         << endl;

    // Employee 5
    cout << "employee id\t\t: " << emp5.id << endl;
    cout << "employee name\t\t: " << emp5.name << endl;
    cout << "employee age\t\t: " << emp5.age << endl;
    cout << "employee role\t\t: " << emp5.role << endl;
    cout << "employee salary\t\t: " << emp5.salary << endl;
    cout << "employee city\t\t: " << emp5.city << endl;
    cout << "employee experience\t: " << emp5.experience << " years" << endl;
    cout << "employee company name\t: " << emp5.company_name << endl;

    return 0;
}
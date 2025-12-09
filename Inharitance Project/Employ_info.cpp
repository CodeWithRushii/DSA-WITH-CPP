#include <iostream>
#include <string>
using namespace std;

class A
{
protected:
    int id;
    string name, role;
    float salary;
    int experience;
    string comp_name, address, email, contact;

public:
    void setBasic(int i, string n, string r)
    {
        id = i;
        name = n;
        role = r;
    }
};

class B : public A
{
public:
    void setJobDetails(float s, int exp)
    {
        salary = s;
        experience = exp;
    }
};

class C : public B
{
public:
    void getJobSummary()
    {
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
    }

    void setCompany(string c_name, string addr)
    {
        comp_name = c_name;
        address = addr;
    }
};

class D : public C
{
public:
    void setContact(string mail, string phone)
    {
        email = mail;
        contact = phone;
    }

    void getFullDetails()
    {
        cout << "\n----- Employee Full Information -----" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
        cout << "Contact: " << contact << endl;
    }
};
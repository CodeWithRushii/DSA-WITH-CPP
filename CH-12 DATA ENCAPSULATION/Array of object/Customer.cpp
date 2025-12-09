#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int id;
    string name;
    int age;
    string city;
    string mobile_number;
    int simcard_validity;
    string telecom_brandname;

public:
    //  Setter
    void setCustomerInfo()
    {
        cout << "Enter Customer ID: ";
        cin >> this->id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, this->name);

        cout << "Enter Age: ";
        cin >> this->age;
        cin.ignore();

        cout << "Enter City: ";
        getline(cin, this->city);

        cout << "Enter Mobile Number: ";
        getline(cin, this->mobile_number);

        cout << "Enter SIM Card Validity (in years): ";
        cin >> this->simcard_validity;
        cin.ignore();

        cout << "Enter Telecom Brand Name: ";
        getline(cin, this->telecom_brandname);
    }

    // Getter
    void getCustomerInfo()
    {
        cout << "Customer ID           : " << this->id << endl;
        cout << "Name                  : " << this->name << endl;
        cout << "Age                   : " << this->age << endl;
        cout << "City                  : " << this->city << endl;
        cout << "Mobile Number         : " << this->mobile_number << endl;
        cout << "SIM Validity (Years)  : " << this->simcard_validity << endl;
        cout << "Telecom Brand         : " << this->telecom_brandname << endl;
    }
};
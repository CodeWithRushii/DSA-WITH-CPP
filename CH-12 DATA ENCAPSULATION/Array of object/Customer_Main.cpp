#include <iostream>
#include "Customer.cpp"
using namespace std;

int main()
{

    int choice;
    cout << endl;
    cout << "Enter the number of customers: ";
    cin >> choice;
    Customer c[choice]; // Array of customers

    cout << endl;

    // Taking input for customers
    cout << "Enter details of customers:" << endl
         << endl;
    for (int i = 0; i < choice; i++)
    {
        cout << "Customer No " << (i + 1) << ":" << endl
             << endl;
        c[i].setCustomerInfo();
        cout << endl;
    }

    cout << endl;

    // output
    cout << "Customer Records:" << endl
         << endl;
    for (int i = 0; i < choice; i++)
    {
        cout << "Customer No " << (i + 1) << ":" << endl
             << endl;
        c[i].getCustomerInfo();
        cout << endl;
    }

    return 0;
}

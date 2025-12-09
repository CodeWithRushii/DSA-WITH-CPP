#include <iostream>
#include <string>
using namespace std;

class Cafe
{
private:
    string type;
    int rating;
    int established_year;
    int staff;
    static string name;
    static string location;

public:
    // Constructor
    Cafe()
    {
        cout << "enter cafe number: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
           cout << endl;
           cout << "enter " << i + 1 << " cafe Details:" << endl;
           cout << "Enter Cafe Type: ";
           cin >> this->type;

           cout << "Enter Cafe Rating: ";
           cin >> this->rating;

           cout << "Enter Established Year: ";
           cin >> this->established_year;

           cout << "Enter Staff Quantity: ";
           cin >> this->staff;

           cout << endl;

           cout << "Cafe Details:" << endl;
           cout << "-------------------------" << endl;
           cout << "Cafe Name: " << name << endl;
           cout << "Cafe Type: " << this->type << endl;
           cout << "Cafe Rating: " << this->rating << endl;
           cout << "Cafe Location: " << location << endl;
           cout << "Established Year: " << this->established_year << endl;
           cout << "Staff Quantity: " << this->staff << endl;
       }
    }

};

string Cafe::name = "Starbucks";
string Cafe::location = "Surat , Gujarat";

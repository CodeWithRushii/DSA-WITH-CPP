#include <iostream>
#include <string>
using namespace std;

class Company
{
private:
    int id;
    int staff_quantity;
    double revenue;
    int import_diamonds;
    int export_diamonds;
    string ceo;
    static string name;

public:


    // Constructor
    Company(int id, int staff, double revenue, int import_diamonds, int export_diamonds, string ceo)
    {
        this->id = id;
        this->staff_quantity = staff;
        this->revenue = revenue;
        this->import_diamonds = import_diamonds;
        this->export_diamonds = export_diamonds;
        this->ceo = ceo;
    }

    

    void getCompanydata()
    {
        cout << "Company ID: " << this->id << endl;
        cout << "Company Name: " << this->name << endl;
        cout << "Staff Quantity: " << this->staff_quantity << endl;
        cout << "Revenue (per year): " << this->revenue << endl;
        cout << "Diamonds Imported (per year): " << this->import_diamonds << endl;
        cout << "Diamonds Exported (per year): " << this->export_diamonds << endl;
        cout << "CEO: " << this->ceo << endl;
        cout << endl;
    }

    static void CompanyName()
    {
        cout << " Company Name: " << name << endl;
    }
};

string Company::name = "Global Enterprises";

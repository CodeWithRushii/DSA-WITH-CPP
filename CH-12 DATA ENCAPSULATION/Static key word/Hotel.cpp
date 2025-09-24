#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int id;
    string name;
    string type;
    int rating;
    int staff;
    int room;

public:
    // Static members
    static string location;
    static int establish_year;

    // Setter for non-static data
    void setData()
    {
        cout << "Enter Hotel ID: ";
        cin >> this->id;

        cin.ignore(); 
        cout << "Enter Hotel Name: ";
        getline(cin,this->name);

        cout << "Enter Hotel Type (hotel/motel): ";
        getline(cin,this-> type);

        cout << "Enter Hotel Rating : ";
        cin >> this->rating;

        cout << "Enter Hotel Staff Quantity: ";
        cin >> this->staff;

        cout << "Enter Hotel Room Quantity: ";
        cin >> this->room;
    }

    // Display function
    void getData()
    {
        cout << "--------------------------------------" << endl;
        cout << "Hotel ID          : " << this->id << endl;
        cout << "Hotel Name        : " << this->name << endl;
        cout << "Hotel Type        : " << this->type << endl;
        cout << "Hotel Rating      : " << this->rating << endl;
        cout << "Hotel Location    : " << this->location << endl;
        cout << "Established Year  : " << this->establish_year << endl;
        cout << "Staff Quantity    : " << this->staff << endl;
        cout << "Room Quantity     : " << this->room << endl;
    }
    static void displayStaticData()
    {
        cout << " Hotel Location: " << location << endl;
        cout << " Establish Year: " << establish_year << endl;
    }
};

string Hotel::location = "surat gujarat";
int Hotel::establish_year = 2000;
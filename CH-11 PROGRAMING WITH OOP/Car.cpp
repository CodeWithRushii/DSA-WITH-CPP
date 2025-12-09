#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[30];
    char car_color[20];
    char car_model[30];
    int car_release_year;
};

int main()
{
    cout << "Car Details" << endl
         << endl;

    Car car1;
    Car car2;
    Car car3;
    Car car4;

    // Car 1
    cout << "Enter Car 1 Details" << endl
         << endl;
    cout << "Enter Car ID: ";
    cin >> car1.car_id;
    cout << "Enter Car Company Name: ";
    cin >> car1.car_company_name;
    cout << "Enter Car Color: ";
    cin >> car1.car_color;
    cout << "Enter Car Model: ";
    cin >> car1.car_model;
    cout << "Enter Car Release Year: ";
    cin >> car1.car_release_year;
    cout << endl;

    // Car 2
    cout << "Enter Car 2 Details" << endl
         << endl;
    cout << "Enter Car ID: ";
    cin >> car2.car_id;
    cout << "Enter Car Company Name: ";
    cin >> car2.car_company_name;
    cout << "Enter Car Color: ";
    cin >> car2.car_color;
    cout << "Enter Car Model: ";
    cin >> car2.car_model;
    cout << "Enter Car Release Year: ";
    cin >> car2.car_release_year;
    cout << endl;

    // Car 3
    cout << "Enter Car 3 Details" << endl
         << endl;
    cout << "Enter Car ID: ";
    cin >> car3.car_id;
    cout << "Enter Car Company Name: ";
    cin >> car3.car_company_name;
    cout << "Enter Car Color: ";
    cin >> car3.car_color;
    cout << "Enter Car Model: ";
    cin >> car3.car_model;
    cout << "Enter Car Release Year: ";
    cin >> car3.car_release_year;
    cout << endl;

    // Car 4
    cout << "Enter Car 4 Details" << endl
         << endl;
    cout << "Enter Car ID: ";
    cin >> car4.car_id;
    cout << "Enter Car Company Name: ";
    cin >> car4.car_company_name;
    cout << "Enter Car Color: ";
    cin >> car4.car_color;
    cout << "Enter Car Model: ";
    cin >> car4.car_model;
    cout << "Enter Car Release Year: ";
    cin >> car4.car_release_year;
    cout << endl;

    
    cout << "Car Details Output" << endl
         << endl;

    // Car 1
    cout << "car id\t\t\t: " << car1.car_id << endl;
    cout << "car company name\t: " << car1.car_company_name << endl;
    cout << "car color\t\t: " << car1.car_color << endl;
    cout << "car model\t\t: " << car1.car_model << endl;
    cout << "car release year\t: " << car1.car_release_year << endl
         << endl;

    // Car 2
    cout << "car id\t\t\t: " << car2.car_id << endl;
    cout << "car company name\t: " << car2.car_company_name << endl;
    cout << "car color\t\t: " << car2.car_color << endl;
    cout << "car model\t\t: " << car2.car_model << endl;
    cout << "car release year\t: " << car2.car_release_year << endl
         << endl;

    // Car 3
    cout << "car id\t\t\t: " << car3.car_id << endl;
    cout << "car company name\t: " << car3.car_company_name << endl;
    cout << "car color\t\t: " << car3.car_color << endl;
    cout << "car model\t\t: " << car3.car_model << endl;
    cout << "car release year\t: " << car3.car_release_year << endl
         << endl;

    // Car 4
    cout << "car id\t\t\t: " << car4.car_id << endl;
    cout << "car company name\t: " << car4.car_company_name << endl;
    cout << "car color\t\t: " << car4.car_color << endl;
    cout << "car model\t\t: " << car4.car_model << endl;
    cout << "car release year\t: " << car4.car_release_year << endl;

    return 0;
}
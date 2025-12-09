#include <iostream>
#include "Companies.cpp"
using namespace std;

int main()
{

    Company::CompanyName();

    int n;
    cout << "Enter number of companies: ";
    cin >> n;

    int id[n], staff[n], import_diamonds[n], export_diamonds[n];
    string ceo[n];
    double revenue[n];

    // Input for each company
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter details for Company " << (i + 1) << ":" << endl
             << endl;
             
        cout << "Enter Company ID: ";
        cin >> id[i];

        cout << "Enter Staff Quantity: ";
        cin >> staff[i];

        cout << "Enter Company Revenue: ";
        cin >> revenue[i];

        cout << "Enter Raw Diamonds Imported: ";
        cin >> import_diamonds[i];

        cout << "Enter Diamonds Exported: ";
        cin >> export_diamonds[i];

        cout << "Enter Company CEO: ";
        cin.ignore();
        getline(cin, ceo[i]);

        cout << endl;
    }

    // Output for each company
    for (int i = 0; i < n; i++)
    {
        Company company(id[i], staff[i], revenue[i], import_diamonds[i], export_diamonds[i], ceo[i]);
        company.getCompanydata();
    }
    return 0;
}
#include <iostream>
using namespace std;
main()
{
    int units;
    float amt;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 50)
    {
        amt = units * 0.50;
    }
    else if (units <= 150)
    {
        amt = 25 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        amt = 100 + (units - 150) * 1.20;
    }
    else
    {
        amt = 220 + (units - 250) * 1.50;
    }
    float total;
    total = amt + (amt * 0.20);

    cout << "Electricity amt = Rs. " << total << endl;
}
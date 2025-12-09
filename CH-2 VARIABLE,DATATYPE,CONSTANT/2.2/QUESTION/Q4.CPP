#include <iostream>
#define PI 100
using namespace std;

int main()
{
    int p, r, t;

    cout << "Enter the principal amount: ";
    cin >> p;

    cout << "Enter the rate of interest: ";
    cin >> r;

    cout << "Enter the time (in years): ";
    cin >> t;

    cout << endl;

    int simpleInterest;

    simpleInterest = (p * r * t) / PI;

    cout << "The Simple Interest is: " << simpleInterest << endl;
}
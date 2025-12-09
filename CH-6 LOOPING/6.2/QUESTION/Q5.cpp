// Write a Program to print leap years between two given numbers using a while loop.
// For example,
// Input:
// Enter the first number: 2020
// Enter the second number: 2040

// Output:
// // 2020, 2024, 2028, 2032, 2034, 2040

#include <iostream>
using namespace std;

int main()
{
    int Firstyear, Lastyear;

    cout << "Enter the first year: ";
    cin >> Firstyear;

    cout << "Enter the last year : ";
    cin >> Lastyear;

    while (Firstyear <= Lastyear)
    {
        if ((Firstyear % 4 == 0 && Firstyear % 100 != 0) || (Firstyear % 400 == 0))
        {
            cout << Firstyear << endl;
        }
        Firstyear++;
    }


}
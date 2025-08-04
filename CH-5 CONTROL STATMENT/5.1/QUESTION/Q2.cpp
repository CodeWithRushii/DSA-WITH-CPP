// Write a Program to find if a given number is neutral or not using a ladder if else.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "The number is neutral." << endl;
    }
    else if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is negative." << endl;
    }
}
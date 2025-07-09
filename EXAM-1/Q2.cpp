#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    if (num % 5 == 0)
    {
        cout << "The number is divisible by 5." << endl;
    }
    else
    {
        cout << "The number is not divisible by 5." << endl;
    }
}
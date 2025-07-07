#include <iostream>
using namespace std;

main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl;
    
    if (num1 < num2)
    {
        cout << "min number is: " << num1 << endl;
    }
    else
    {
        cout << "min number is: " << num2  << endl;
    }
}
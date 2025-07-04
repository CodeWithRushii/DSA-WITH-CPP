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
        cout << "Minimum number is: " << num1 << endl;
    }
    else
    {
        cout << "Minimum number is: " << num2  << endl;
    }
}
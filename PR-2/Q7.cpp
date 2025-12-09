#include <iostream>
using namespace std;

main()
{
    int num, a, b;

    cout << "Enter any number: ";
    cin >> num;

    b = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }
    a = num;

    int sum = a + b;
    cout << "The sum is " << sum << endl;
}
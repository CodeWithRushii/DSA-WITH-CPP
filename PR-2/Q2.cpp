#include <iostream>
using namespace std;
main()
{
    int n;
    int l;
    int rev = 0;
    int i = 0;
    int a = 0;
    int b;

    cout << "Enter the Number := ";
    cin >> n;
    b = n;
    l = n;
    while (l != 0)
    {
        rev = rev * 10 + (l % 10);
        l /= 10;
    }
    while (rev != 0)
    {
        i++;
        int digit = rev % 10;
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            num *= digit;
        }
        a += num;
        rev /= 10;
    }
    if (a == b)
    {
        cout << b << " is a Disarium Number";
    }
    else
    {
        cout << b << " is not a Disarium Number";
    }
}
#include <iostream>
using namespace std;   

int main()
{
    int a, b, c, d;
    cout << "Enter a numbers: ";
    cin >> a ;
    cout << "Enter b numbers: ";
    cin >> b ;  
    cout << "Enter c numbers: ";
    cin >> c ;
    cout << "Enter d numbers: ";
    cin >> d ;
    cout << endl;

    if (a == b && a == c && a == d && b == c && b == d && c == d)
    {
        cout << "All numbers are equal." << endl;
    }
    else if (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        cout << "Some numbers are equal." << endl;
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                    cout << "The max number is: " << a << endl;
                else
                    cout << "The max number is: " << d << endl;
            }
            else
            {
                if (c > d)
                    cout << "The max number is: " << c << endl;
                else
                    cout << "The max number is: " << d << endl;
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                    cout << "The max number is: " << b << endl;
                else
                    cout << "The max number is: " << d << endl;
            }
            else
            {
                if (c > d)
                    cout << "The max number is: " << c << endl;
                else
                    cout << "The max number is: " << d << endl;
            }
        }
    }
}
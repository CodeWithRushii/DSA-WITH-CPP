#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a numbers: ";
    cin >> a ;
    cout << "Enter b numbers: ";
    cin >> b ;  
    cout << "Enter c numbers: ";
    cin >> c ;
    cout << endl;

    if (a == b && a == c && b == c)
    {
        cout << "All numbers are equal." << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Both numbers are equal." << endl;
    }

    else
    {
        if (a < b)
        {
            if (a < c)

                cout << "The min number is: " << a << endl;

            else

                cout << "The min number is: " << c << endl;
        }
        else
        {
            if (b < c)

                cout << "The min number is: " << b << endl;

            else

                cout << "The min number is: " << c << endl;
        }
    }
}
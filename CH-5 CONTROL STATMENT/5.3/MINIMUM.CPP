#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    (a < b)
            ?(a < c)? cout <<a<< " is the min." << endl
            : cout << c << " is the min." << endl
        :(b < c)? cout << b << " is the min." << endl
        : cout << c << " is the min." << endl;
}
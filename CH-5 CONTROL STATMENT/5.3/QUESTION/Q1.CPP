#include <iostream>
using namespace std;

main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    (a > b)
            ?(a > c)? cout <<a<< " is the max." << endl
            : cout << c << " is the max." << endl
        :(b > c)? cout << b << " is the max." << endl
        : cout << c << " is the max." << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << endl;

    c = a;
    a = b;
    b = c;

    cout << "After swapping: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}
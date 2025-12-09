#include <iostream>
using namespace std;

int main()
{
    int b, h, area;

    cout << "Enter the base of the triangle: ";
    cin >> b;

    cout << "Enter the height of the triangle: ";
    cin >> h;

    cout << endl;

    area = 0.5 * b * h;
    cout << "The area of the triangle with base " << b << " and height " << h << " is " << area << endl;
}
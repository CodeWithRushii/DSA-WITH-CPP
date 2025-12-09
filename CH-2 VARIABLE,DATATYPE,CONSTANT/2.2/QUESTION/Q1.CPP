#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    float area = PI * r * r;
    cout << "The area of the circle is: " << area << endl;
}
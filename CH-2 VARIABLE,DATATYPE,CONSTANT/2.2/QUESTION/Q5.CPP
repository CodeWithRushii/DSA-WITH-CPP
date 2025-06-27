#include <iostream>
using namespace std;

main()
{
    const float PI = 3.14159;
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << endl;

    float perimeter = 2 * PI * r;
    cout << "The perimeter of the circle is: " << perimeter << endl;
}
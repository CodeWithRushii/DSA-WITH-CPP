#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "Enter value of z: ";
    cin >> z;
    cout << endl;
    int result = (x + y + z) * (x + y + z);
    cout << "(x + y)^2 = " << result << endl;
}

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y ;
    cout<< endl;
    int result = (x - y) * (x - y);
    cout << "(x - y)^2 = " << result << endl;
}

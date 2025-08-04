#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << endl;

    a = a + b; 
    b = a - b; 
    a = a - b;
    
    cout << "After swapping: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}
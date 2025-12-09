#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j;

    cout << "Enter your number: ";
    cin >> j;
    
    while (i <= 10)
    {
        
        cout << j << "*" << i << " =" << j * i << endl;
        i++;
    }

}
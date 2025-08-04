#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j;

    cout << "Enter your number: ";
    cin >> j;

    while (i <= j)
    {
        if (i % 2 != 0)
            cout << i << "\t" << endl;
        i++;
    }
}
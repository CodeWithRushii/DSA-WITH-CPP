#include <iostream>
using namespace std;

main()
{
    int i;
    cout << "Enter any number: ";
    cin >> i;

    int j = 0;
    while (i > 0 || j > 9)
    {
        if (i == 0)
        {
            i = j;
            j = 0;
        }
        j += i % 10;
        i /= 10;
    }

    cout << "total: " << j << endl;
}
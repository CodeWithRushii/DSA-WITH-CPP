#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int j = 1, k = 1, i = 0;

    while (i < n)
    {
        cout << j << endl;
        j = k + j;
        k++;
        i++;
    }

    cout << endl;
}
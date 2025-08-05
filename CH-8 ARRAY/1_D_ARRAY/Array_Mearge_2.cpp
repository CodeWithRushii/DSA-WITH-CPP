#include <iostream>
using namespace std;

int main()
{
    // This program merges three arrays into one array
    int size1 , size2,size3;

    cout << "enter size 1: ";
    cin >> size1;
    cout << "enter size 2: ";
    cin >> size2;
    cout << "enter size 3: ";
    cin >> size3;

    int a[size1] , b[size2] , c[size3];
    int marge[size1 + size2 + size3];

    // Input for the first array

    cout << endl
            << "array input 1" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "emter a[ " << i << " ]: ";
        cin >> a[i];
    }

    // Input for the second array

    cout << endl
         << "array input 2" << endl;    
    for (int i = 0; i < size2; i++)
    {
        cout << "emter b[ " << i << " ]: ";
        cin >> b[i];
    }

    // Input for the third array

    cout << endl
         << "array input 3" << endl;
    for (int i = 0; i < size3; i++)
    {
        cout << "emter c[ " << i << " ]: ";
        cin >> c[i];
    }
    

    // marge logic

    // Copy a[]
    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }

    // Copy b[]
    for (int i = 0; i < size2; i++)
    {
        marge[size1 + i] = b[i];
    }

    // Copy c[]
    for (int i = 0; i < size3; i++)
    {
        marge[size1 + size2 + i] = c[i];
    }

    cout << endl << "array output " << endl;

    for (int i = 0; i < size1 + size2 + size3; i++)
    {
        cout << marge[i] << " \t ";
    }

    cout << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int size1 , size2;

    cout << "enter size 1: ";
    cin >> size1;
    cout << "enter size 2: ";
    cin >> size2;

    int a[size1] , b[size2];
    int marge[size1 + size2];
    cout << endl
            << "array input 1" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "emter a[ " << i << " ]: ";
        cin >> a[i];
    }

    cout << endl
         << "array input 2" << endl;    
    for (int i = 0; i < size2; i++)
    {
        cout << "emter b[ " << i << " ]: ";
        cin >> b[i];
    }

    // marge logic

    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        cout << " enter b [ " << i << " ]: ";
        marge[size1 + i] = b[i];
    }
    cout << endl
            << "array output " << endl;

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << marge[i] << " \t ";
    }

        cout << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    // Input 
    cout << endl
         << "ARRAY INPUT:" << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl
             << endl;
    }

    // output 
    cout << "ARRAY OUTPUT:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
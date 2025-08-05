#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int a[size];

    cout << endl
         << "array input " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[ " << i << " ]: ";
        cin >> a[i];
    }
    cout << endl
         << "array output " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " \t ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    cout << endl
         << "Sum of array elements: " << sum << endl;

    cout << endl
         << "avg of array elements: " << (float)sum / size << endl;

    cout << endl;
}
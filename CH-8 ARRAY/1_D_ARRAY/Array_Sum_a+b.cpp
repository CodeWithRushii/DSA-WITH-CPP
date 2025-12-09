#include <iostream>
using namespace std;

int main()
{
    // Taking input for array sizes
    int size1, size2;
    cout << "Enter the 1 size of the array: ";
    cin >> size1;
    cout << "Enter the 2 size of the array: ";
    cin >> size2;

    int a[size1], b[size2];

    cout << endl
         << "array input " << endl;

    // Input elements for the first array

    for (int i = 0; i < size1; i++)
    {
        cout << "Enter a[ " << i << " ]: ";
        cin >> a[i];
    }
    cout << endl;
    // Input elements for the second array

    for (int i = 0; i < size2; i++)
    {
        cout << "Enter b[ " << i << " ]: ";
        cin >> b[i];
    }

    // Output the elements of the first array

    cout << endl
         << "first array output " << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << a[i] << " \t ";
    }

    // Output the elements of the second array

    cout << endl << "second array output " << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << b[i] << " \t ";
    }

    // Calculate the sum of  array

    cout << endl;

    int sum = 0;
    for (int i = 0; i < size1; i++)
    {
        sum = sum + a[i] + b[i];
    }

    // Output the sum and average of the array elements

    cout << endl
         << "Sum of array elements: " << sum << endl;

    cout << endl
         << "avg of array elements: " << (float)sum / (size1 + size2)
         << endl;

    cout << endl;
}
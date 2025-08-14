#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    // Input for first array
    cout << "\nEnter elements for first array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << endl
             << endl;
    }

    // Input for second array
    cout << "\nEnter elements for second array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
        cout << endl
             << endl;
    }

    // Add arrays
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Output sum array
    cout << "\nSum of two arrays:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << sum[i][j] << "\t";
        cout << endl;
    }
}
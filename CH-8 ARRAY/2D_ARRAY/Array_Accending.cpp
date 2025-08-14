#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int a[rows][cols];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "]:- ";
            cin >> a[i][j];
        }

    // Flatten the 2D array to 1D
    int total = rows * cols;
    int temp[total];
    int idx = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            temp[idx++] = a[i][j];

    // Sort the 1D array
    for (int i = 0; i < total - 1; i++)
        for (int j = i + 1; j < total; j++)
            if (temp[i] > temp[j])
            {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }

    // Fill back to 2D array
    idx = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            a[i][j] = temp[idx++];

    cout << "All elements in ascending order (2D array):" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
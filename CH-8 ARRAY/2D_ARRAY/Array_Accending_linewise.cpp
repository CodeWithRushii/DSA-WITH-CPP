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

    // Sort each row in ascending order
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < cols - 1; k++)
        {
            for (int l = k + 1; l < cols; l++)
            {
                if (a[i][k] > a[i][l])
                {
                    int temp = a[i][k];
                    a[i][k] = a[i][l];
                    a[i][l] = temp;
                }
            }
        }
    }

    cout << "Each row in ascending order:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
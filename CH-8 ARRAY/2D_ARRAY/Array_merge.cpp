#include <iostream>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter the number of Rows := ";
    cin >> row;
    cout << "Enter the number of Colmuns := ";
    cin >> col;

    // taking first array value
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // taking second array value
    int b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of b[" << i << "][" << j << "] := ";
            cin >> b[i][j];
        }
        cout << endl;
    }

    // merging array
    int c[row][col * 2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col * 2; k++)
            {
                c[i][j] = a[i][j];
                c[i][col + j] = b[i][j];
            }
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col * 2; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}
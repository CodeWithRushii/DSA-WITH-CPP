#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    cout << endl;
    int arr[rows][cols];

    // Input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // matrix
    cout << "Matrix:-" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Row sum
    int row;
    cout << "Enter the row you want to print and sum :- ";
    cin >> row;
    cout << endl;

    if (row < 1 || row > rows)
    {
        cout << "Invalid row number!" << endl;
    }

    int rowSum = 0;
    cout << "Elements of row " << row << ": ";
    for (int j = 0; j < cols; j++)
    {
        cout << arr[row - 1][j] << " ";
        rowSum += arr[row - 1][j];
    }

    cout << endl
         << "Sum of row " << row << " = " << rowSum << endl
         << endl;

    // Column sum
    int column;
    cout << "Enter the column you want to print and sum :- ";
    cin >> column;

    if (column < 1 || column > cols)
    {
        cout << "Invalid column number!" << endl;
    }

    int colSum = 0;
    cout << "Elements of column " << colsum << ": ";
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i][column - 1] << " ";
        colSum += arr[i][column - 1];
    }
    cout << endl
         << "Sum of column " << column << " = " << colSum << endl
         << endl;
}

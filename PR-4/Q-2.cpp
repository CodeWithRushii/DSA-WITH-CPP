#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows:- ";
    cin >> rows;
    cout << "Enter number of columns:- ";
    cin >> cols;

    int a[rows][cols];
    //input
    cout << "array input of :-" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }

    int largest;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] > largest)
                largest = a[i][j];

    cout << "Largest number in the array is: " << largest << endl;
}
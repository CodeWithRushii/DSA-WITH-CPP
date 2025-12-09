#include <iostream>
using namespace std;
void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int size;

    cout << endl;
    cout << "Enter number of elements :- ";
    cin >> size;
    int a[size];

    cout << endl
         << "Array Inputs of " << size << " Elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element [" << i << "] :- ";
        cin >> a[i];
    }

    cout << endl
         << "Array Output of " << size << " Elements was :- " << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    insertion_sort(a, size);

    cout << endl
         << "Sorted array elements was :- " << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
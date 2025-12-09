#include <iostream>
using namespace std;

void bubble_sort(int a[], int size)
{
    int pass = 1;
    while (pass <= size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1]) // 4 > 9
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
        }
        pass++;
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
         << "Array Output of " << size << " Elements :- " << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    bubble_sort(a, size);

    cout << endl
         << "Sorted array elements :- " << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
void selection_sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }

            int swap = a[i];
            a[i] = a[min_index];
            a[min_index] = swap;
        }
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

    selection_sort(a, size);

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

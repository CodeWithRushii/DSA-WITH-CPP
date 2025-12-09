#include <iostream>
#include <vector>
using namespace std;

//selection sort
void selectionsort(int a[], int size)
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

//merge sort
void merge(vector<int> &a, int first, int mid, int last)
{
    int n1 = mid - first + 1;
    int n2 = last - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = a[first + i];
    for (int j = 0; j < n2; j++)
        right[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = first;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

void margesort(vector<int> &a, int first, int last)
{
    if (first < last)
    {
        int mid = first + (last - first) / 2;

        margesort(a, first, mid);    // left
        margesort(a, mid + 1, last); // right
        merge(a, first, mid, last);
    }
}

//binary search
void binary_search(vector<int> &a, int value)
{
    int left = 0;
    int right = a.size() - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == value)
        {
            found = true;
            cout << "Element " << value << " found at index " << mid << endl;
            break;
        }
        else if (a[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not found " << endl;
    }
}
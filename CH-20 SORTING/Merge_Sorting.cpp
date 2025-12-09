#include <iostream>
#include <vector>
using namespace std;

void marge(vector<int> &a, int first, int mid, int last)
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

void marge_sort(vector<int> &a, int first, int last)
{
    if (first < last)
    {
        int mid = first + (last - first) / 2;

        marge_sort(a, first, mid);//left
        marge_sort(a, mid + 1, last);//right
        marge(a, first, mid, last);
    }
}

int main()
{
    int n;

    cout << "Enter number elements: ";
    cin >> n;

    vector<int> a;

    cout << endl
         << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl
         << "Array is : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    marge_sort(a, 0, n - 1);

    cout << endl
         << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

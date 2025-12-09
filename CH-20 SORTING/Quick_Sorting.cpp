#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[high]);
    return i;
}

void quickSort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);

        quickSort(a, low, pi - 1);  // left
        quickSort(a, pi + 1, high); // right
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> a[i];
    }

    cout << endl
         << "Unsorted elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    // Call Quick Sort
    quickSort(a, 0, n - 1);

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl
         << endl;

    return 0;
}

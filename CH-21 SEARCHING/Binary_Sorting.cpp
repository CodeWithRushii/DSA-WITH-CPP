#include <iostream>
using namespace std;

int binary_search(int arr[], int n)
{
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element[" << i << "]: ";
        cin >> arr[i];
        cout << endl;
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    int result = binary_search(arr, n);
    cout << endl;

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}
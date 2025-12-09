#include <iostream>
using namespace std;

int linear_search(int arr[], int n)
{
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    return index;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
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

    int result = linear_search(arr, n);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
}
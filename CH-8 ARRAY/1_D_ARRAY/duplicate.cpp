#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Remove duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                // Move all elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce size
            }
            else
            {
                j++; // Only move to next if no deletion
            }
        }
    }

    cout << "After removing duplicates:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

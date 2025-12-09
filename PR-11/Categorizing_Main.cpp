#include <iostream>
#include <vector>
#include "Categorizing.cpp"
using namespace std;

int main()
{
    int n;
    int i;

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

    do
    {
        cout << endl
             << endl
             << "----------  Menu ----------" << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Binary Search" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> i;

        switch (i)
        {
        case 1:
            selectionsort(a.data(), a.size());
            cout << endl
                 << "Array after Selection Sort : ";
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            break;
        case 2:
            margesort(a, 0, a.size() - 1);
            cout << endl
                 << "Array after Merge Sort : ";
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }

            break;
        case 3:
            int target;
            cout << "Enter element to search: ";
            cin >> target;
            binary_search(a, target);
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (i != 4);
}

#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cout << "How many numbers you want to enter? ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    cout << "Pairs that add up to " << target << ":\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << a[i] << " + " << a[j] << " = " << target << endl;
            }
        }
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int *size = new int;
    cout << "Enter number of elements : ";
    cin >> *size;

    vector<int> v(*size);

    for (int i = 0; i < *size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> v[i];
    }

    cout << endl
         << "Vector is : ";
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    for (int i = 0; i < *size / 2; i++)
    {
        int element = v[i];
        v[i] = v[*size - i - 1];
        v[*size - i - 1] = element;
    }

    cout << endl
         << "Reverse Vector is : ";
    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    delete size;
    return 0;
}

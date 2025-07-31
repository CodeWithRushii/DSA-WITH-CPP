#include <iostream>
using namespace std;
main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        for (int k = 5; k > i; k--)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (i % 2 == 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        for (int k = i; k < 5; k++)
        {
            cout << "    ";
        }
        for (int j = i; j >= 1; j--)
        {
            if (i % 2 != 0)
            {
                char ch = j + 64;
                cout << ch << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
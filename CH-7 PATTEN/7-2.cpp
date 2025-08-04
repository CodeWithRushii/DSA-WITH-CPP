#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i % 2 == 1)
            {
                if ((j - i) % 2 == 0)
                    cout << (char)('a' + j - 1) << " ";
                else
                    cout << (char)('A' + j - 1) << " ";
            }
            else
            {
                if (j % 2 == 0)
                    cout << j << " ";
                else
                    cout << (char)('a' + j - 1) << " ";
            }
        }
        cout << endl;
    }
}
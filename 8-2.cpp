#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int a = 2 * i - 1;
        for (int j = a; j <= 9; j += 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


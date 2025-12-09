#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ((j % 2 == 1) ? 1 : 0) << " ";
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

main()
{
    for (int i = 10; i <= 15; i++)
    {
        for (int j = 10; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
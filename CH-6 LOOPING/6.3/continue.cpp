#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
}
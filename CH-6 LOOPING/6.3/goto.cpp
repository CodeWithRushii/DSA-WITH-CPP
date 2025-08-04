#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i == 5)
        {
            goto end;
        }
        cout << i << endl;
    }
end:
    cout << "Loop ended at i = " << 5 << endl;
    return 0;
}
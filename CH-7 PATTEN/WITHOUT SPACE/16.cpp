#include <iostream>
using namespace std;
int main()
{
    for (int i = 1, ch = 65; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch++) << " ";
        }
        cout << endl;
    }
}
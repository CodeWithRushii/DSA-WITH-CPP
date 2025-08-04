#include <iostream>
using namespace std;
int main()
{
    for (int i = 1, num = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}
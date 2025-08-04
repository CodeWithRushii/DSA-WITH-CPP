// 100 90 80 70 60
// 9  8  7  6
// 80 70 60
// 7  6
// 60
// if else
#include <iostream>
using namespace std;

int int main()
{
    int start1 = 100, start2 = 9;
    for (int row = 0; row < 5; row++)
    {
        if (row % 2 == 0)
        {

            for (int num = start1 - (row / 2) * 20; num >= 60; num -= 10)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {

            for (int num = start2 - (row / 2); num >= 6; num--)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

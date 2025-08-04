// 1 b 3 d 5
// b b b b
// 3 d 5
// d d
// 5
#include <iostream>
using namespace std;
int int main()
{
    int num = 1;
    for (int row = 0; row < 5; row++)
    {
        if (row % 2 == 0)
        {
            for (int i = 0; i <= row; i++)
            {
                if (i % 2 == 0)
                {
                    cout << num << " ";
                    num += 2;
                }
                else
                {
                    cout << char('a' + i / 2) << " ";
                }
            }
        }
        else
        {
            for (int i = row; i >= 0; i--)
            {
                if (i % 2 == 0)
                {
                    cout << char('a' + i / 2) << " ";
                }
                else
                {
                    cout << num - (i / 2) * 2 << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
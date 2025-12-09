#include <iostream>
using namespace std;

void loop(int start, int end)
{
    if (start <= end)
    {
        cout << start << endl;

        start++;

        loop(start, end);
    }
}

int main()
{
    loop(1, 10);
}
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter your number: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "The sum is :" << sum << endl;
}
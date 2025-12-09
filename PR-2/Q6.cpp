#include <iostream>
using namespace std;

main()
{
    int n, count = 0;
    cout << "Enter any number: ";
    cin >> n;

    if (n == 0)
    {
        count = 1; // 0 has one digit
    }
    else
    {
        while (n != 0)
        {
            n = n / 10; // Remove last digit
            count++;
        }
    }

    cout << "Total : " << count << endl;
}
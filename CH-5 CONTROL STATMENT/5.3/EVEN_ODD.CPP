// even odd with ternary operator
#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0)
        ? cout << num << " is even." << endl
        : cout << num << " is odd." << endl;
}
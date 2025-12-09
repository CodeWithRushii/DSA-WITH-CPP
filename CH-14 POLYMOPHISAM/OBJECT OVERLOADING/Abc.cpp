#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    void setValue()
    {
        cout << endl
             << "Enter a number: ";
        cin >> n;
    }

    void getValue()
    {
        cout << endl
             << "Big value is : " << n << endl
             << endl;
    }

    Number operator<(Number obj)
    {
        Number temp;
        if (n < obj.n)
            temp.n = obj.n;
        else
            temp.n = n;
        return temp;
    }
};
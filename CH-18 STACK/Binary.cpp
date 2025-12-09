#include <iostream>
#include "Stack.cpp"
#define max 100
using namespace std;

int main()
{
    Stack stack(max);
    int num;

    cout << endl
         << "enter any number :- ";
    cin >> num;

    while (num != 0)
    {
        int rem = num % 2;
        stack.push(rem);
        num = num / 2;
    }
    stack.display();
    cout << endl;
}
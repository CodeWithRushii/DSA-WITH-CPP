#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligeble for vote...." << endl;
    }
    else
    {
        cout << "You are not eligeble for vote..." << endl;
    }
}
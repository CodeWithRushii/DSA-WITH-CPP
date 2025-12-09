#include <iostream>
using namespace std;

// Take nothing, return something function
int getNumber()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int main()
{
    int value = getNumber();
    cout << "You entered: " << value << endl;
}
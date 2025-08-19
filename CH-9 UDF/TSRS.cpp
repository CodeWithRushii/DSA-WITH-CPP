#include <iostream>
using namespace std;

// Take something, return something function
int square(int num)
{
    return num * num;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = square(n);
    cout << "Square is: " << result << endl;
}
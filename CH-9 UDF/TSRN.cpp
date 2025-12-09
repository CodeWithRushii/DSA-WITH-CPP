#include <iostream>
using namespace std;

// Take something, return nothing function
void printSquare(int num)
{
    cout << "Square is: " << num * num << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printSquare(n);
}

#include <iostream>
using namespace std;

int main()
{
    char a, b;

    cout << "Enter a character: ";
    cin >> a;
    cout << "Enter end character: ";
    cin >> b;

    char current = a;
    do
    {
        cout << current << endl;
        current++;
    } while (current <= b);
}
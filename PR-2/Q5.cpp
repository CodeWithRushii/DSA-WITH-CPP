#include <iostream>
using namespace std;

main()
{
    char ch = 'a';
    do
    {
        cout << ch << " ";
        ch = ch + 4; 
    } while (ch <= 'z');
}
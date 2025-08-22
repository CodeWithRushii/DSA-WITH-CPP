#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter any string: ";

    gets(str);

    int len = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        len++;
    }
    cout << "The length of a string is: " << len << endl;
    return 0;
}
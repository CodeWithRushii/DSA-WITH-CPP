#include <iostream>
#include <cstring>
using namespace std;

// Take char array, return int (1 for valid, 0 for invalid)
int isValidEmail(char email[])
{
    int has = -1, dot = -1, len = strlen(email);
    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
            has = i;
        if (email[i] == '.' && has  != -1)
        {
            dot = i;
            break;
        }
    }
    if (has > 0 && dot > has + 1 && dot < len - 1)
        return 1;
    else
        return 0;
}

int main()
{
    char email[100];
    cout << "Enter your email: ";
    cin >> email;

    if (isValidEmail(email))
        cout << "Valid email address." << endl;
    else
        cout << "Invalid email address." << endl;

    return 0;
}
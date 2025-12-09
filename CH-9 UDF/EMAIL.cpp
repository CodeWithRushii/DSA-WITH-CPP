#include <iostream>
#include <cstring>
using namespace std;

// Take char array, return int (1 for valid, 0 for invalid)
int isValidEmail(char email[])
{
    int atPos = -1, dotPos = -1, len = strlen(email);
    for (int i = 0; i < len; i++)
    {
        if (email[i] == '@')
            atPos = i;
        if (email[i] == '.' && atPos != -1)
        {
            dotPos = i;
            break;
        }
    }
    if (atPos > 0 && dotPos > atPos + 1 && dotPos < len - 1)
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
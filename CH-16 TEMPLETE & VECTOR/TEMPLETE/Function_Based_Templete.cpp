#include <iostream>
using namespace std;

template <typename T>
T addition(T a, T b)
{
    return a + b;
}

template <typename T>
T input()
{
    T n;
    cin >> n;
    return n;
}

int main()
{
    cout << addition<int>(45, 10) << endl;
    cout << addition<double>(78.23, 49.67) << endl;

    int a;
    float PI;
    char ch;

    cout << "Enter any number : ";
    a = input<int>();

    cout << "Enter PI value : ";
    PI = input<float>();

    cout << "Enter character value : ";
    ch = input<char>();

    cout << a << endl
         << PI << endl
         << ch << endl;

    return 0;
}

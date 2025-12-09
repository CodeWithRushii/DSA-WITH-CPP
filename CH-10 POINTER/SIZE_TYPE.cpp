#include <iostream>
using namespace std;

int main() {

    cout << endl << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    int a[5];
    cout << "Size of array: " << sizeof(a) << " bytes" << endl<<endl;

    return 0;
}
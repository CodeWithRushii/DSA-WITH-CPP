#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;

    cout << " a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << " ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 12;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
    delete ptr;
    ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
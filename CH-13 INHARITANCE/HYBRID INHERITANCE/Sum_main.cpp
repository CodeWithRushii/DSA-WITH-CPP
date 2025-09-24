#include "Sum.cpp"

int main() {
    int n1, n2, n3, n4;

    cout << "Enter value A: ";
    cin >> n1;
    cout << "Enter value B: ";
    cin >> n2;
    cout << "Enter value C: ";
    cin >> n3;
    cout << "Enter value D: ";
    cin >> n4;

    D obj(n1, n2, n3, n4);
    obj.displaySum();

    return 0;
}

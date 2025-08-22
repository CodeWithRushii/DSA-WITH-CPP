#include <iostream>
using namespace std;

// UDF to print cubes
void Cubes(int *p, int n) {
    for (int i = 0; i < n; i++) {
        cout << (*(p + i)) * (*(p + i)) * (*(p + i)) << "\t";
    }
}

int main() {
    int n;
    cout << "Enter array size : ";
    cin >> n;

    int a[n][n];

    cout << endl<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    cout << endl<<"Cubes of all elements:"<<endl;
    Cubes(*a, n * n);

    return 0;
}

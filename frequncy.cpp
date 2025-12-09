#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nFrequency of each number:\n";

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])  
                break;  // means already counted
        }

        // If loop didn't break early, element is new
        if (i == j) {
            int count = 0;
            for (int k = 0; k < n; k++) {
                if (arr[i] == arr[k])
                    count++;
            }
            cout << arr[i] << " → " << count << endl;
        }
    }

    return 0;
}
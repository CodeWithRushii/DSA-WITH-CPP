#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    
    vector<int> v2(5, 1);
    vector<int> v3 {9, 8, 5, 4, 3, 2};

    cout << v2[0] << endl;
    cout << v2[1] << endl;
    cout << v2[2] << endl;
    cout << v2[3] << endl;
    cout << v2[4] << endl;
    cout << "Size of v2: " << v2.size() << endl;

    cout << v3[0] << endl;
    cout << v3[1] << endl;
    cout << v3[2] << endl;
    cout << v3[3] << endl;
    cout << v3[4] << endl;
    cout << v3[5] << endl;
    cout << "Size of v3: " << v3.size() << endl;
    return 0;
}
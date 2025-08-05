#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int a[size];
    cout<<endl<<"array input"<<endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i  <<"]:- ";
        cin >> a[i];
    }
    cout << endl << "Array elements are: ";

    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}
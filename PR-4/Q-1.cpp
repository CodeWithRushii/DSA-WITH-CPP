#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int a[size];
    cout<<endl<<"array input"<<endl;

    //input
    for(int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i  <<"]:- ";
        cin >> a[i];
    }
    cout << endl << "Array Negative elements are: ";

    for(int i = 0; i < size; i++)
    {
        if(a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;

}
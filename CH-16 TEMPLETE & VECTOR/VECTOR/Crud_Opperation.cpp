#include <iostream>
#include <vector>
using namespace std;

class crudOperation
{
private:
    vector<int> v;

public:
    void addDataElement(int element)
    {
        cout << endl;
        v.push_back(element);
        cout << "Element was added successfully." << endl;
        cout << endl;
    }

    void displayDataElement()
    {
        cout << endl;
        if (v.empty() == 0)
        {
            cout << "vector is :";
            for (int element : v)
            {
                cout << element << " ";
            }
            cout << endl
                 << endl;
        }
        else
        {
            cout << "Vector is Empty !!!" << endl
                 << endl;
        }
    }

    void updateDataElement(int index, int element)
    {
        cout << endl;
        if (index >= 0 && index < v.size())
        {
            v[index] = element;
            cout << "Element Updated Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Choice !!!" << endl;
        }
        cout << endl;
    }

    void deleteDataElement(int index)
    {
        cout << endl;
        if (index >= 0 && index < v.size())
        {
            v.erase(v.begin() + index);
            cout << "Element Deleted Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Choice !!!" << endl;
        }
        cout << endl;
    }
};

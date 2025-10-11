#include <iostream>
using namespace std;

class Stack
{
    int *array;
    int size, top;

public:
    Stack(int size)
    {
        this->size = size;
        this->array = new int[size];
        this->top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    void Push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Is Overflow ... " << endl;
        }
        else
        {
            top++;
            this->array[this->top] = value;
            cout << endl
                 << "value " << value << " is Pushed  ... " << endl;
        }
    }

    void Pop()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Stack Is Underflow ... " << endl;
        }
        else
        {
            top--;
            cout << endl
                 << "value is Poped  ... " << endl;
        }
        cout << endl;
    }

    void Display()
    {
        if (top == -1)
        {
            cout << endl
                 << "there is no element in the stack." << endl;
        }
        else
        {
            cout << endl
                 << "stack values:- ";
            for (int i = top; i >= 0; i--)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }

    void IsEmpty()
    {
        cout << endl;
        if (top == -1)
        {
            cout << endl
                 << "Stack Is Empty ... " << endl;
        }
        else
        {
            cout << endl
                 << "Stack Is Not Empty ... " << endl;
        }
        cout << endl;
    }

    void IsFull()
    {
        cout << endl;
        if (top == size - 1)
        {
            cout << endl
                 << "Stack Is Full ... " << endl;
        }
        else
        {
            cout << endl
                 << "Stack Is Not Full ... " << endl;
        }
        cout << endl;
    }
};

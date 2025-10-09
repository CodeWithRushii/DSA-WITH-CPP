#include <iostream>
#define max 100
using namespace std;

class Stack
{
private:
    char *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new char[size];
        this->top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }

    void push(char element)
    {
        if (top == size - 1)
            cout << "Stack Overflow" << endl;
        else
            arr[++top] = element;
    }

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return ' ';
        }
        return arr[top--];
    }

    bool Palindrom(string str)
    {
        Stack temp(str.length());
        for (char ch : str)
        {
            temp.push(ch);
        }
        for (char ch : str)
        {
            if (ch != temp.pop())
                return false;
        }
        return true;
    }
};

int main()
{
    string name;
    Stack stack(max);
    cout << endl
         << "Enter the Name :- ";
    cin >> name;

    if (stack.Palindrom(name))
        cout << "it was a palindrome." << endl
             << endl;
    else
        cout << "it was Not a palindrome." << endl
             << endl;

    return 0;
}

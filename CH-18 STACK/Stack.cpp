#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int count;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->count = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    // stack logic here

    void push(int element)
    {
        if (this->top == this->size - 1)

            cout << "Stack Overflow! Cannot push " << element << " to the stack." << endl;

        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->count++;
        }
    }

    void pop()
    {
        if (this->top == -1)

            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;

        else
        {

            this->top--;
            this->count--;
            cout << " popped is succsfuly....." << endl;
        }
    }

    void peek()
    {
        if (this->top == -1)

            cout << "Stack is empty. No top element." << endl;

        else
        {
            cout << "Top element is: " << this->arr[this->top] << endl;
        }
    }
    void display()
    {
        if (this->top == -1)

            cout << "Stack is empty. Nothing to display." << endl;

        else
        {
            cout << "Stack elements: ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty()
    {
        if (this->top == -1)

            cout << "Stack is empty." << endl;

        else
        {
            cout << "Stack is not empty." << endl;
        }
    }

    void isFull()
    {
        if (this->top == this->size - 1)

            cout << "Stack is full." << endl;

        else

            cout << "Stack is not full." << endl;
    }

    void length()
    {
        cout << "Current stack length: " << this->count << endl;
    }
};

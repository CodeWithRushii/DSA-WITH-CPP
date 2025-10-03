#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        size = 0;
    }
    void insertatbeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << endl
             << "Node Inserted..." << endl
             << endl;

        size++;
    }

    void search(int position)
    {
        Node *ptr = head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        cout << "Data at position " << position << " is: " << ptr->data << endl;
        ptr = nullptr;
        delete ptr;
        cout << endl;
    }

    void deleteatposition(int position)
    {
        if (head == nullptr || size == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }
        if (position < 0 || position >= size)
        {
            cout << "Position invalid..." << endl;
            return;
        }

        Node *prev = head;

        Node *curr = head;

        for (int i = 0; i < position; i++)
            curr = curr->next;

        for (int i = 0; i < position - 1; i++)
            prev = prev->next;

        prev->next = curr->next;

        delete curr;
        curr = nullptr;

        prev = nullptr;
        delete prev;
        cout << "Node Deleted..." << endl
             << endl;
        size--;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        cout << "Reversed ";
        display();
    }

    void display()
    {
        Node *ptr = head;
        cout << "Linked List: ";

        while (ptr != nullptr)
        {
            cout << ptr->data << "   ";
            ptr = ptr->next;
        }
        cout << endl
             << endl;
        ptr = nullptr;
        delete ptr;
    }
};
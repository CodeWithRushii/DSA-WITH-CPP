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
public:
    Node *head;
    int size;

    LinkedList()
    {
        head = nullptr;
        size = 0;
    }

    void AddHead(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        size++;
    }

    void AddTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        size++;
    }

    void position(int position, int data)
    {
        if (position < 0 || position > size)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *newNode = new Node(data);

        if (position == 0)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
        size++;
    }

    void update(int data, int position)
    {
        if (head == nullptr || size == 0)
        {
            cout << "List is empty...";
            return;
        }
        if (position < 0 || position >= size)
        {
            cout << "Position invalid...";
            return;
        }
        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data;
        ptr = nullptr;
    }

    void DeleteHead()
    {
        if (head == nullptr || size == 0)
        {
            cout << "List is empty..." << endl;
            return;
        }

        Node *ptr = head;
        head = head->next;
        delete ptr;
        size--;
    }

    void DeleteTail()
    {
        if (head == nullptr || size == 0)
        {
            cout << endl
                 << "List is empty..." << endl;
            return;
        }
        Node *ptr = this->head;
        while (ptr->next->next != nullptr)
        {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = nullptr;
        ptr = nullptr;
        size--;
    }

    void DeletePosition(int position)
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

        Node *prev = this->head;

        Node *current = this->head;

        for (int i = 0; i < position; i++)
            current = current->next;

        for (int i = 0; i < position - 1; i++)
            prev = prev->next;

        prev->next = current->next;

        delete current;
        current = nullptr;

        prev = nullptr;
        delete prev;
        cout << "Node Deleted..." << endl;
        size--;
    }

    void fetch()
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    int choice, data;
    int pos;

    do
    {
        cout << "\n1. Insert at head" << endl;
        cout << "2. Insert at tail" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Update" << endl;
        cout << "5. Delete from beginning" << endl;
        cout << "6. Delete from end" << endl;
        cout << "7. Delete from position" << endl;
        cout << "8. Fetch" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            l1.AddHead(data);
            break;

        case 2:
            cout << "Enter data: ";
            cin >> data;
            l1.AddTail(data);
            break;

        case 3:
            cout << "Enter position :-";
            cin >> pos;
            cout << "Enter data:- ";
            cin >> data;
            l1.position(pos, data);
            break;

        case 4:
            cout << "Enter position :-";
            cin >> pos;
            cout << "Enter new data:- ";
            cin >> data;
            l1.update(data, pos);
            break;

        case 5:
            l1.DeleteHead();
            break;

        case 6:
            l1.DeleteTail();
            break;

        case 7:
            int pos;
            cout << "Enter position :- ";
            cin >> pos;
            l1.DeletePosition(pos);
            break;

        case 8:
            l1.fetch();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);

    return 0;
}

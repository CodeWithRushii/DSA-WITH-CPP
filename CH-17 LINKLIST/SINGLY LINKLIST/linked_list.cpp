#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();

    head->data = 10;
    head->next = NULL;

    Node *second = new Node();
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node *third = new Node();
    third->data = 30;
    third->next = NULL;
    second->next = third;

    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}
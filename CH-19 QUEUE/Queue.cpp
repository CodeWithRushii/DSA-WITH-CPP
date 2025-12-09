#include <iostream>
using namespace std;

class Queue
{
private:
    int *dataArray;
    int Size;
    int get_Front;
    int get_Rear;
    int Count;

public:
    Queue(int size)
    {
        this->Size = size;
        this->dataArray = new int[this->Size];
        this->get_Front = -1;
        this->get_Rear = -1;
        this->Count = 0;
    }

    ~Queue()
    {
        delete[] dataArray;
    }

    void enqueue(int element)
    {
        if (this->get_Rear == this->Size - 1)
        {
            cout << endl
                 << "Queue is overflow...." << endl;
        }
        else if (this->get_Front == -1 && this->get_Rear == -1)
        {
            this->get_Front = 0;
            this->get_Rear = 0;
            this->dataArray[this->get_Rear] = element;
            this->Count++;
        }
        else
        {
            this->get_Rear++;
            this->dataArray[this->get_Rear] = element;
            this->Count++;
        }
    }

    void dequeue()
    {
        if (this->get_Front == -1 && this->get_Rear == -1)
        {
            cout << endl
                 << "Queue is underflow....." << endl;
        }
        else if (this->get_Front == this->get_Rear)
        {
            this->get_Front = -1;
            this->get_Rear = -1;
            this->Count--;
        }
        else
        {
            this->get_Front++;
            this->Count--;
        }
    }

    void getFront()
    {
        if (this->get_Front == -1 && this->get_Rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Front : " << this->dataArray[this->get_Front] << endl;
        }
    }

    void getRear()
    {
        if (this->get_Front == -1 && this->get_Rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Rear : " << this->dataArray[this->get_Rear] << endl;
        }
    }

    void display()
    {
        if (this->get_Front == -1 && this->get_Rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl;
            for (int i = this->get_Front; i <= this->get_Rear; i++)
            {
                cout << this->dataArray[i] << " ";
            }
            cout << endl;
        }
    }

    void checkEmpty()
    {
        if (this->get_Front == -1 && this->get_Rear == -1)
        {
            cout << endl
                 << "Queue is empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not empty..." << endl;
        }
    }

    void checkFull()
    {
        if (this->get_Rear == this->Size - 1)
        {
            cout << endl
                 << "Queue is full..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not full..." << endl;
        }
    }

    int getSize()
    {
        return this->Count;
    }
};

int main()
{
    int value;
    cout << "Enter number of elements : ";
    cin >> value;

    Queue queue(value);
    int choice;
    int element;

    do
    {
        cout << endl;
        cout << "Press 1 for enqueue operation" << endl;
        cout << "Press 2 for dequeue operation" << endl;
        cout << "Press 3 for front operation" << endl;
        cout << "Press 4 for rear operation" << endl;
        cout << "Press 5 for display operation" << endl;
        cout << "Press 6 for isEmpty operation" << endl;
        cout << "Press 7 for isFull operation" << endl;
        cout << "Press 8 for Size operation" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter any element : ";
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.getFront();
            break;
        case 4:
            queue.getRear();
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.checkEmpty();
            break;
        case 7:
            queue.checkFull();
            break;
        case 8:
            cout << endl
                 << "Queue Length : " << queue.getSize() << endl;
            break;
        case 0:
            cout << endl
                 << "Exit.." << endl;
            break;
        default:
            cout << endl
                 << "Invalid Choice..." << endl;
        }
    } while (choice != 0);

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};
class queuelist
{
public:
    Node *front, *rear;
    queuelist()
    {
        this->rear = nullptr;
        this->front = nullptr;
    }
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        // if queue is empty, front and rear are equal kinda like setting both to 0 from -1 in linear queue
        if (rear == nullptr)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    int dequeue()
    {
        if (isempty())
        {
            cout << "\nqueue is empty, cannot delete anything\n";
            return -999;
        }
        // store front as temp then change front to uska next(next node)
        Node *temp = front;
        front = temp->next;
        return temp->data;
        delete temp;
    }
    bool isempty()
    {
        return front == nullptr;
    }
    void display()
    {
        Node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    queuelist ll;
    int choice, element;
    while (2 + 2 != 5)
    {
        cout << "1 - enqueu\n";
        cout << "2 - dequeue\n";
        cout << "3 - display\n";
        cout << "4 - exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue : ";
            cin >> element;
            ll.enqueue(element);
            break;
        case 2:
            if (!ll.isempty())
                cout << "deleted number : " << ll.dequeue() << endl;
            else
                cout << "\nCannot delete anything, list is empty\n";
            break;
        case 3:
            ll.display();
            break;
        case 4:
            return 0;
        }
    }
    cout << endl;
}

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
class stacklist
{
public:
    Node *top;
    stacklist()
    {
        this->top = nullptr;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    int pop()
    {
        Node *temp = top;
        top = top->next;
        int num = temp->data;
        delete temp;
        return num;
    }
    bool isempty()
    {
        return top == nullptr;
    }
    void display()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void peek()
    {
        if (!isempty())
            cout << "Element at top :" << top->data;
        else
            cout << "List is empty";
    }
};
int main()
{
    stacklist ll;
    int choice, element;
    while (2 + 2 != 5)
    {
        cout << "1 - push\n";
        cout << "2 - pop\n";
        cout << "3 - peek top element\n";
        cout << "4 - display\n";
        cout << "5 - exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to push : ";
            cin >> element;
            ll.push(element);
            break;
        case 2:
            if (!ll.isempty())
                cout << "deleted number : " << ll.pop();
            else
                cout << "\nCannot delete anything, list is empty\n";
            break;
        case 3:
            ll.peek();
            break;
        case 4:
            ll.display();
            break;
        case 5:
            return 0;
        }
    }
    cout << endl;
}

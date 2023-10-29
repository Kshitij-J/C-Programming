#include <iostream>
using namespace std;

// Global Variables
int queue[10];
int front = -1, rear = -1;

void enqueue(int);
void dequeue();
bool isempty();
bool isfull();

int main()
{
    int n, element, c = 1, choice, adding_element;
    cout << "Enter Size Of Queue (max size is 10)";
    cin >> n;

    while (c == 1)
    {
        cout << "1 - add element to queue\n";
        cout << "2 - delete element from queue\n";
        cout << "3 - view the queue\n\n\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (rear == n - 1 || isfull())
                cout << "Queue is Full";
            else
            {
                cout << "Enter elements to be added to the queue: ";
                cin >> adding_element;
                enqueue(adding_element);
            }
            break;
        case 2:
            if (isempty())
                cout << "Queue is empty";
            else
            {
                cout << "Deleting element from Queue";
                dequeue();
                cout << "Element Deleted";
            }
            break;
        case 3:
            if (isempty())
                cout << "Queue is empty";
            else
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << queue[i] << " ";
                }
            }
            break;
        default:
            break;
        }
        cout << "\n Do You want to continue?\n Press 1 for continue and any other number to exit";
        cin >> c;
        cout << "\n\n\n\n";
    }
}

bool isempty()
{
    return (front == -1 && rear == -1);
}

bool isfull()
{
    return (rear == 9);
}

void enqueue(int n)
{
    front = 0;
    rear++;
    queue[rear] = n;
}

void dequeue()
{
    queue[front] = 0;
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

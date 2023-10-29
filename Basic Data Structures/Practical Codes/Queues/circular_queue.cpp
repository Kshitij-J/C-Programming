#include <iostream>
using namespace std;

// global Variables
long long queue[3];

int front = -1, rear = -1;

bool isfull();
bool isempty();
void enqueue(long long);
void dequeue();
bool num_isvalid(long long);

int main()
{
    int choice = 0;
    long long phn_num = 0;
    while (true)
    {
        cout << "\n\n1 - Add caller id to the queue\n";
        cout << "2 - Delete caller id from the queue\n";
        cout << "3 - View all callers in the queue\n";
        cout << "4 - Exit\n";
        cout << "\nEnter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (isfull())
                cout << "Queue is full";
            else
            {
                cout << "Enter Phone Number: ";
                cin >> phn_num;
                if (num_isvalid(phn_num))
                {
                    enqueue(phn_num);
                }
                else
                    cout << "Enter A valid number !!";
            }
            break;
        case 2:
            if (isempty())
                cout << "Queue is empty";
            else
            {
                dequeue();
                cout << "Number Deleted !!";
            }
            break;
        case 3:
            if (isempty())
                cout << "Queue is empty";
            else
            {
                if (rear >= front)
                {
                    for (int i = front; i <= rear; i++)
                    {
                        cout << queue[i] << " ";
                    }
                }
                else
                {
                    for (int i = front; i < 10; i++)
                    {
                        cout << queue[i] << " ";
                    }

                    for (int i = 0; i <= rear; i++)
                    {
                        cout << queue[i] << " ";
                    }
                }
            }
            break;
        case 4:
            cout << "Exiting";
            return 0;
        default:
            cout << "Wrong Input";
        }
    }
}

bool isfull()
{
    if (front == 0 && rear == 9) // max - size cond
        return true;
    else if (rear == (front - 1)) // circular queue cond
        return true;
    else
        return false;
}

bool isempty()
{
    return (front == rear && front == -1);
}

void enqueue(long long a)
{
    if (front == -1)
        front = 0;
    if (rear == 9)
        rear = -1;
    rear++;
    queue[rear] = a;
}

void dequeue()
{
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        queue[front] = 0;
        front++;
        if (front == 9)
            front = -1;
    }
}

bool num_isvalid(long long number)
{
    int cnt = 0;
    while (number != 0)
    {
        cnt++;
        number /= 10;
    }
    return cnt == 10;
}
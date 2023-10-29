#include <iostream>
using namespace std;

class Node {
    public:
    // Members
    int data;
    Node *next;

    // Constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    public:
    // Members
    Node *head;

    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor
    ~LinkedList() {
        DeleteList();
    }

    // Methods
    int GetSize() {
        int cnt = 0;
        Node *temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    void InsertAtHead(int val) {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }

    int DeleteAtHead() {
        if (head == nullptr) {
            cout << "List is already empty" << endl;
            return -999;
        }
        Node *temp = head;
        head = head->next;
        int num = temp->data;
        delete temp;
        return num;
    }

    void InsertAtTail(int val) {
        Node *newnode = new Node(val);
        if (head == nullptr) {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    int DeleteAtTail() {
        // If list is empty
        if (head == nullptr) {
            cout << "List is already empty" << endl;
            return -999;
        }
        // If size is one node
        if (head->next == nullptr) {
            int num = head->data;
            delete head;
            head = nullptr;
            return num;
        }
        Node *temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        int num = temp->next->data;
        delete temp->next;
        temp->next = nullptr;
        return num;
    }

    void InsertAtPos(int pos, int val) {
        Node *newnode = new Node(val);
        // if list is empty
        if (head == nullptr) {
            head = newnode;
            return;
        }
        // If pos is greater than list size
        if (pos > GetSize()) {
            InsertAtTail(val);
            return;
        }
        // If position is 1 (basically insert at head)
        if (pos == 1) {
            InsertAtHead(val);
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    int DeleteAtPos(int pos) {
        // If list is empty
        if (head == nullptr) {
            cout << "List is already empty" << endl;
            return -999;
        }
        // If position specified is first node
        if (pos == 1) {
            return DeleteAtHead();
        }
        // If pos specified is greater than list size
        if (pos > GetSize()) {
            return DeleteAtTail();
        }
        // General case
        Node *before = head;
        for (int i = 1; i < pos - 1; i++) {
            before = before->next;
        }
        Node *nodeToDelete = before->next;
        before->next = nodeToDelete->next;
        int num = nodeToDelete->data;
        delete nodeToDelete;
        return num;
    }

    void DeleteList() {
        if (head == nullptr) {
            return;
        }
        Node *temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            delete head;
            head = temp;
        }
    }

    void Display() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        cout << "List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList a;
    int choice, num, pos;
    do {
        cout<<"Menu:"<<endl
            <<"1. Insert At Head"<<endl
            <<"2. Delete at Head"<<endl
            <<"3. Insert at tail"<<endl
            <<"4. Delete at tail"<<endl
            <<"5. Insert at Position"<<endl
            <<"6. Delete at Position"<<endl
            <<"7. Display"<<endl
            <<"8. Delete list"<<endl
            <<"9. Quit"<<endl
            <<"$ ";
            cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Value to insert: ";
                cin>>num;
                a.InsertAtHead(num);
                break;
            case 2:
                cout << "Deleted node with value: " << a.DeleteAtHead() << endl;
                break;
            case 3:
                cout<<"Value to insert: ";
                cin >> num;
                a.InsertAtTail(num);
                break;
            case 4:
                cout << "Deleted node with value: " << a.DeleteAtTail() << endl;
                break;
            case 5:
                do {
                    cout<<"Position to insert value: ";
                    cin >> pos;
                } while (pos < 1);
                cout<<"Value to insert: ";
                cin >> num;
                a.InsertAtPos(pos, num);
                break;
            case 6:
                do {
                    cout<<"Position to delete value: ";
                    cin >> pos;
                } while (pos < 1);
                cout << "Deleted node with value: " << a.DeleteAtPos(pos) << endl;
                break;
            case 7:
                a.Display();
                break;
            case 8:
                a.DeleteList();
                break;
            case 9:
                break;
            default:
                cout<<"Invalid option"<<endl;
        }
    }
    while (choice != 9);
}
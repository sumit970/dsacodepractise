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
        this->next = NULL;
    }

    ~Node()
    {

        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data" << endl;
    }
};

void print(Node *tail)
{
    if (tail == NULL)
    {

        cout << "the linkdlist is empty";

    }

    Node *temp = tail;

    do
    {
        cout << tail->data <<" ";
        tail = tail->next;
    }

    while (tail != temp);
}

void insertnode(Node *&tail, int element, int data)
{

    if (tail == NULL)
    {
        Node *newnode = new Node(data);

        tail = newnode;

        newnode->next = newnode;
    }

    else
    {
        // non -empty list
        // assuming that the element is present in the last.

        // Node *curr = tail;
        // while (curr->data != element)
        // {
        //     curr = curr->next;
        // }
        // Node *temp = new Node(data);
        // temp->next = curr->next;
        // curr->next = temp;

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;

        //  curr->next=temp;

        // Node *temp=new Node(data);
        // tail->next=temp;
        // temp->next=temp;
    }
}
void deletelist(Node *&tail, int value)
{

    if (tail == NULL)
    {
        cout << "Node is empty please check again !";
        return;
    }
    // //for 1 node i.e tail.
    // if(tail->next=tail){
    //     delete tail;
    // }

    else
    {
        // assuming value is already present in the linkdlist.

        Node *curr = tail->next;
        Node *prev = tail;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linkdist
        if (curr == prev)
        {
            tail = NULL;
        }
        // >=2 nod linkdlist.
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool checkcircuar(Node *&tail)
{

    Node *temp = tail->next;
    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == tail)
    {
        return true;
    }
}

int main()
{
    Node *tail = NULL;
    insertnode(tail, 1, 13);
    print(tail);
    cout << endl;
    insertnode(tail, 13, 14);
    print(tail);
    cout << endl;
    insertnode(tail, 14, 15);
    print(tail);
    cout << endl;
    insertnode(tail, 15, 16);
    print(tail);
    cout << endl;

    deletelist(tail, 13);
    print(tail);
    cout<<"the linkdlist is " << checkcircuar(tail);
    // deletelist(tail,15);
    // print(tail);
}
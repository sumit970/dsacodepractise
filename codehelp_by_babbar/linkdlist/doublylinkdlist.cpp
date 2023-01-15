#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
        cout << "memory free for node with data";
    }
};
// prints the node;

void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data;
        temp = temp->next;
    }
    cout << " " << endl;
}
// gives the lenth of total node;

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        cout << temp->data;
        temp = temp->next;
    }
    return len;
}
void insertNodeHead(Node *&head, int data)
{

    // handle empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }

    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;

    // cout<<head->data;
}
void insertNodeTail(Node *&tail, int data)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }

    Node *new_node = new Node(data);
    new_node->next = NULL;
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}
void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
{
    Node *nodetoinsert = new Node(data);
    if (pos == 1)
    {
        insertNodeHead(head, data);
    }

    int cnt = 1;
    Node *temp = head;

    while (cnt < pos - 1)
    {

        temp = temp->next;
        cnt++;
    }
    // new_node->prev=temp->prev;
    // new_node->next=temp;
    // temp->prev=new_node;
    // temp->prev->next=new_node;
    nodetoinsert->next = temp->next;
    nodetoinsert->prev = temp;
    temp->next = nodetoinsert;
    temp->next->prev = nodetoinsert;
}

// deleting the linkdlist in

void deletenode(int pos, Node *&head)
{

    if (pos == 1)
    {

        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;

        temp->next = NULL;

        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev=NULL;
        pre->next=curr->next;
        curr->next->prev=pre->next;
        curr->next=NULL;
        
        delete curr;


    }
}

int main()
{
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // cout<<endl;
    // Node* tail = node1;
    // cout << "data of node1 " << head->data << endl;

    // cout << getLength(head) << endl;

    insertNodeHead(head, 9);
    insertNodeHead(head, 8);
    insertNodeHead(head, 7);
    insertNodeHead(head, 5);
    insertNodeTail(tail, 3);

    insertAtPosition(tail, head, 1, 102);
    print(head);
    cout<<endl;
    deletenode(2,head);

    // cout<<endl;
    print(head);
}

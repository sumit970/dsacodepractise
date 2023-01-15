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
   
};



void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // insertion(head, 23);
    
    print(head);
}
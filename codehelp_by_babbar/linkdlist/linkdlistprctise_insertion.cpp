
// Introductioin to linkdlist in c++;
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
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free with  data" << endl;
    }
};

void nodeAtHead(Node* &head, int new_data)
{

    Node *new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
}

void nodeAtTail(Node* &tail, int new_data)
{
    Node *new_node = new Node(new_data);

    tail->next=new_node;
    tail = tail->next;


}



void insertatposition(Node* &head,Node* &tail ,int position ,int data){

    if(position ==1){
        nodeAtHead(head,99);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<=position-1){
        temp=temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next==NULL){
        nodeAtTail(tail,data);
        return;
    }
    //creating a new node
    Node *newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;

}
void insertion(Node *&head, int data)
{

    Node *new_node = new Node(data);
    new_node->next = head;
    new_node = head;
}

// delete node

void deletenode(Node *&head, int position)
{


    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

        
        
    }
}

void printlist(Node *&head)
{
    Node* temp=head;
    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp= temp->next;
    }
}


int main()
{

    Node* node1=new Node(10);
    Node *head = node1;
    Node *tail = node1;
    nodeAtHead(head,12);
    nodeAtHead(head,3);
    nodeAtHead(head,1);
    // nodeAtTail(tail,3);
    // insertatposition(head,tail,3,99);
    deletenode(head,1);
    printlist(head);
    cout<<"tail is"<<tail->data;

}



#include <iostream>
using namespace std;

// linkdlist is starting
//  it is a dynamic data structure
//  it can be allocated in heap memory.

// |-------------              |
// |
// |
// |_______________types
// types of linkdlist
// - single ll
// double ll
// circular ll

// collection of likdlist
class Node
{

public:
    int data;
    Node *next;

    // constructoris called.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void inserAtthead(Node* &head, int d)
{
    if(head==NULL){
        Node *temp = new Node(d);
        head=temp;
        
    }
    // new node head
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}
void print(Node* &head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// void insertatposition(Node* &head, int positon ,int d){
//     if(positon ==1){
//         inserAtthead(head,d);
//         return;
//     }
    //inserting at last positon 

    // if(temp->next==NuLL){
    //     insertAtTail(tail,d);

    // }
    // if(len ==position-1){
    //     temp=temp->next
    // }

    void reverseList(Node * &head)
    {
        // code here;
        // return head of reversed list;
        
        Node* curr=head;
        Node* prev=NULL;
        if(curr==NULL){
            return ;
        }
        
        while(curr!=NULL){
            prev=curr;
            curr->next=prev;
            curr=curr->next;
            
        }
        head=prev;
    }


int main()
{
    Node *node1 = new Node(10);
//     cout << node1->data << endl;
//     cout << node1->next << endl;
Node* head =node1;
Node* tail=node1;
print(head);
insertAtTail(tail,12);
print(head);
insertAtTail(tail,15);
print(head);
inserAtthead(head, 10);
inserAtthead(head, 32);
inserAtthead(head, 24);
inserAtthead(head, 56);
inserAtthead(head, 65);
reverseList(head);
print(head);
}
// singly linkdlist:-

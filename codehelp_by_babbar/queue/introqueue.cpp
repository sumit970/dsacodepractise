#include <iostream>
using namespace std;

class Queu
{

    int *arr;
    int rear;
    int front;
    int size;
    Queu()
    {
        size=10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty();
    int pop();
    void push(int data);

};

    int Queu:: pop()
    {

        if (front == rear)
        {

            cout << "queue is empty" << endl;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;

            front++;
            if (front == rear)
            {
                {
                    front = 0;
                    rear = 0;
                }
            }
            return ans;
        }
    }
    void Queu:: push(int data)
    {

        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    bool Queu:: isEmpty()
    {

        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


int main()
{
    // Queu qe();
    
    // qe.push(2);
    // qe.push(29);
    // push(34);
    // pop();
    // cout << isEmpty();
}

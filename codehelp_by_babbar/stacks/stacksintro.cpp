#include <iostream>
#include <stack>
using namespace std;

class Stack
{

    // properties of stacks
    public:
    int *arr;
    int size;
    int top;
    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "the is no space available in stack i.e... stack overflow";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow i.e no element is available to pop/delete " << endl;
        }
    }
    bool isempty()
    {
        if (top ==-1 )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "there is no element present in the stack" << endl;
            return -1;
        }
    }
};
main()
{

    Stack st(5);
    // stack creation ..
    //  stack <int>stk;
     st.push(2);
     st.push(10);
     st.push(23);
     st.push(13);
     st.pop();
     cout<<st.peek()<<endl;
     string res=(st.isempty()) ? "stack is empty":"stack is not empty";
    //  if(st.isempty()){
    //     cout<<"stack i s empty"<<endl;


  
    //  }
    //  else{
    //     cout<<"stack is not empty"<<
    //  }\cout
    cout<<res;

    //  stk.push(21);
    //  stk.push(18);
    //  // cout<<stk.top() <<endl;
    //  // cout<<stk.size()<<endl;
    //  // stk.pop();
    //  // stk.pop();
    //  // for(int i=0; i<=stk.size(); i++){
    //  //     stk.top();
    //  //     stk.pop();
    //  // }
    //  if(stk.empty()){
    //      cout<<"stack is empty"<<endl;
    //  }
    //  else{
    //      cout<<"stack is not empty"<<endl;
    //  }
    //  return 0;
}

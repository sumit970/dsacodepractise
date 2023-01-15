
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack <int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    
     for(int i=0;i<k;i++){
        q.push(st.top());
        st.pop();
        
    }
    //fetch n-k element and push it in back
    int rsize=q.size()-k;
    for(int i=0;i<rsize;i++){
        int val=q.front();
        q.push(val);
        q.pop();
    }
    
    return q;
}
int main(){


    
}
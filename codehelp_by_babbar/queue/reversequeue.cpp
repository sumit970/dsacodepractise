#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(queue<int> q)
{
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {

        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        {
            cout << q.front()<<endl;
            q.pop();
        }
    }
}

    int main()
    {
        queue <int> st;
        for (int i = 0; i < 5; i++)
        {
            st.push(rand());
        }
        reverse(st);
        return 0;
    }
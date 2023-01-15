#include <iostream>
#include <stack>
#include <string>
using namespace std;




int main()
{
    string str = "sumitmyname";
    stack<char> st;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        // cout<<ch<<endl;
        // st.push(10);
        // cout<<st.top()<<endl;
        st.push(ch);
        // cout<<st.top();
    }
    string res = " ";
    while (!st.empty())
    {

        char ch = st.top();
        res.push_back(ch);
        st.pop();
    }

     cout<<"the reverse of the string is"<<res<<endl;
         return 0;

}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;
    vector<long long> ans;

    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // store answer of first k size window.
    if (dq.size() > 0)
    {
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    // process the remaining window;
    for (int i = K; i < N; i++)
    {

        if (!dq.empty() && i - dq.front() >= K)
        {
            dq.pop_front();
        }
        // adding the current element.
        // check if the current element is negative then add the number;
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
        // store the answer.
        if (dq.size() > 0)
        {
            ans.push_back(A[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }

    return ans;
}
int main(){
    
}
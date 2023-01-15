#include <iostream>
#include <stack>
#include <vector>
using namespace std;
  
vector<int>nextsmallerElement(vector<int>&arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()>=curr){
            s.pop();

        }
        //ans is stack ka top;
        ans[i]=s.top();
        s.push(curr);

    }
    return ans;
} 

int main(){

    int n=5;
    vector<int>arr;
    arr={1,2,3,4,5};
    nextsmallerElement(arr,n);



}
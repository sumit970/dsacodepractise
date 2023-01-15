#include<iostream>
using namespace std;

bool checksort(int *arr,int size){
        if(size==1||size==0){
            return true;
        }

        if(arr[1]<arr[0])
        {
            return false;
        }

        else{
            bool ans =checksort(arr+1,size-1);
            return ans;
        }
    }
// to find the  sum using recursion.
    int findsum(int *arr,int size){
       
        if(size==0){
            return 0;
        }
        return arr[0]+findsum(arr+1,size-1);
    }
    //linear seARch using recursion 
    bool linearsearch(int *arr,int size ,int numtofind){
        if(size==0)
        {0000000000
            return false;

        }
        if(arr[0]==numtofind){
            return true;

        }
        linearsearch(arr+1,size-1,numtofind);
    }

    
int main (){
    int arr[5]={1,2,3,4,5};
    // cout<<checksort(arr,5);
    bool ans=checksort(arr,5);
    cout<<findsum(arr,5)<<endl;
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }
    cout<<"linear search" <<endl;
    bool search=linearsearch(arr,5,0);
    if(search) {
        cout<<"found";

    }
    else{
        cout<<"not found "<<endl;
    }
}
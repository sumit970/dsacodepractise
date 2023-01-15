#include<iostream>
using namespace std;

void bubblesort(int *arr,int n){
    

    if(n==0||n==1){
        return ;
    }
    //keeping the largest element in the end.
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i],arr[i+1]);
        }
    }
      bubblesort(arr, n-1);

}
int main()
{
    
    // int i = 0;

    // int n=5;
    int arr[5]={1,3,5,2,0};

      bubblesort(arr,5);

      for (int  i = 0; i <5; i++)
      {
        cout<<arr[i]<<endl;
      }
      
}

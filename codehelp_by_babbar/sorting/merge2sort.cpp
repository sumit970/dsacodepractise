#include <iostream>
using namespace std;

int merge(int arr1[], int n, int arr2[], int n1, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n1)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        
        {
            arr3[k++] = arr2[j++];
        }
        // copy the remainig element int new arrayof arr1;
        while (i < n)
        {
            arr3[k++] = arr1[i++];
        }
        // copy the remaining element int arr3 of arr2
        while (j < n1)
        {
            arr3[k++] = arr2[j++];
        }
    }
}
void print (int arr3[],int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    // int n=5,n1=4, nf=n+n1;
    int arr1[5] = {1, 3, 4, 5, 0};
    int arr2[4] = {6, 1, 4, 6};
    int arr3[9]={0};
    merge(arr1, 5, arr2, 4, arr3);
    print (arr3,9);
}
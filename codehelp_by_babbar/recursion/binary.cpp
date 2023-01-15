#include <iostream>
using namespace std;

// void print(int *arr, int s, int e)
// {
//     cout << arr;
//     cout << s;
//     cout << e;
// }

// to find element using binary search.

bool binarySearch(int *arr, int l, int s, int numtofind)
{

    if (s > l)
    {
        return false;
    }
    int mid = s + (l - s) / 2;

    if (arr[mid] == numtofind)
    {
        return true;
    }
    if (arr[mid] < numtofind)
    {

        return binarySearch(arr, l, mid + 1, numtofind);
    }
    if (arr[mid] > numtofind)
    {

        return binarySearch(arr, mid - 1, s, numtofind);
    }
}
// reverse a string.

void reversestring(string &str, int i, int j)
{

    if (i == j)
    {
        cout << str;
        return;
    }
    swap(str[i], str[j]);

    j--;
    i++;
    reversestring(str, i,  j);
}

// palindrom string using recursion.
bool palindrom(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else{
        return palindrom(str, i+1, j-1);

    }
   
}

//power of two 

int power(int a,int b){
    if(b==0){
        return 1;
    }
    int ans =power(a,b/2);
    if(b%2==0){
         return ans*ans;

    }
    else{
        return a*ans*ans;
    }
}



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
    // int arr[5] = {1, 2, 3, 4, 5};
    // int s = 0;
    // int e = 5;
    int i = 0;
    // int j = 4;
    // string str = "soos";

    // int numtofind = 90;
    // int len = str.length() - 1;
    int n=5;
    int arr[5]={1,3,5,2,0};
    // cout<<binarySearch(arr, e, s, numtofind);
    // reversestring(str, i, len);
    // cout<< palindrom(str,i,len);
    // cout<<power(2,3);
      bubblesort(arr,5);
}

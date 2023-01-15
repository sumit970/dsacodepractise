#include <iostream>
using namespace std;

//to find the power_of_two with n;
int power_of_two(int n){
   
   if(n==0){
    return 1;
   }
   return 2*power_of_two(n-1);
}

//to count the total number 


void count(int num){
    // base case
    if(num==0){
        return ;
    }
    // recursive relation
    count(num-1); 
    

    cout<<num<<endl;
}

// recursive metho to find pattern or series.

void series(int i,int j){

    if(i==0||j==0) return ;
       int k=1;
        for(int k=i;k<1;k++){
            k*=k+1;
        
        
        }
        cout<<i<<"/"<<k<<"+"<<j<<endl;

        series(i-1,j-1);
}

// main method to call all the functions
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    count(num);
    cout<<endl;
    cout<<power_of_two(num);
    series(10,10);
}
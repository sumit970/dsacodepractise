#include<iostream>
using namespace std;


int climbladdder(int steps){
    if(steps<0){
        return 0;
    }
    if(steps==0){
        return 1;
    }
    climbladdder(steps-1);
}

void saydigit( int num, string arr[10]){

    if(num<=0){
        return ;
    }
    int digit=num%10;
    num=num/10;
    saydigit(num ,arr);
    cout<< arr[digit]<<" ";
}
int main(){
int steps=342343;
string arr[10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};
// cout<<climbladdder(steps);
saydigit(steps ,arr);

}

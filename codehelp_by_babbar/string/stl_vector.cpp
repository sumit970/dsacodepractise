#include<iostream>
#include <vector>
using namespace std;
// here we will study about dynamic arrays i.e vector
int main(){
    vector<int > v;
    vector<int> a(5,1);

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> last(a);
     for(int i:last){
        cout<< i <<" "<<endl;
    }

    cout<<"size of vector is "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"vector at positon 0 is "<<v[0]<<endl;
    v.push_back(2);
    cout<<"size of vector is "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size of vector is "<<v.capacity()<<endl;


    cout<<"Element at positin 2 is "<<v[2]<<endl;
    cout<<"first element is "<<v.front()<<endl;
    cout<<"last element is "<<v.back()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    v.pop_back();
    cout<<"after pop_back() "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"before clear "<<v.size()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<endl;
}

// results are :-

// 1 1 1 1 1 
// 1 
// 1 
// 1 
// 1 
// 1 
// size of vector is 0
// vector at positon 0 is 1
// size of vector is 2
// size of vector is 4
// Element at positin 2 is 3
// first element is 1
// last element is 3
// 1 2 3
// after pop_back()
// 1 2
// before clear 2
// after clear 0
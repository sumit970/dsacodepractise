#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> qu;
    qu.push(10);
    qu.push(7);
    qu.push(8);

    // qu.pop();

    while(!qu.empty()){
        cout<<qu.back()<<endl;
       
        qu.pop();

    }


}

#include <iostream>
using namespace std;

int getlength(char name[])
{
        int count = 0;
        for (int i = 0;name[i]!='\0';i++)
        {
            count++;
        }
    return count;
}

void reversestring(char name[],int n){
     int i=0;
     int e=n-1;
     while(i<e){
        swap(name[i++],name[e--]);
     }
     cout<<name<<endl;
}

    int main()
    {
        // while (3)
        // {
        char name[25];
        // // using character we cant store whitespace ,\n , tab.
        cout << "Enter your name:";
        cin >> name;
        int n=25;
        // name[2]='\0';
        //     int i=1;
        //    while(name[i]!='/0'){
        //     i++;
        reversestring(name,getlength(name));
        cout<<endl;
        cout << "Length of string is " << getlength(name)<<endl;
        cout << "your name is " << name << endl;
        
        // }

    }
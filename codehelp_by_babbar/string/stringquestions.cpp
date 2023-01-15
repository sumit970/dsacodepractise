#include <iostream>
#include<string>
using namespace std;

int main(){


    string S="sumit is my name";
    // string str1="u";
    // string str2=".";
    // string add=str+str2+str1;
    // cout<<add;
    string newstr="",word="";
        for(int i=0;i<S.length();i++){
            if(S[i]!='.'){
                
                word.push_back(S[i]);
            }
            else{
                newstr=word+".";
                word=""; 
            }

        }
        cout<<newstr<<endl;
}


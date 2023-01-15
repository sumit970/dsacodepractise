// H.W-> difference between character and string.
//  character array -> it is an array  which store character.
//  it store character with each individual character
// string
#include <iostream>
#include <string>
using namespace std;
char toLower(char ch){
    ch=ch-'A'+'a';

    return ch;
}

bool isvalidchar(char ch)
{

    if (ch >= 'a' && ch <= 'z'|| ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}

bool isPalindrome(string s)
{
    int len = s.length();
    int i = 0;
    string temp = "";
    while (i < len)
    {
        if (isvalidchar(s[i]))
        {
            temp.push_back(s[i]);
        }
        i++;
    }

    int len1 = temp.length();
    int st = 0;
    int e = len1 - 1, flag = 0;
    while (st < e)
    {
        if (toLower(temp[st++] )!= toLower(temp[e--]))
        {
            flag = 1;
            return false;
        }
    }
    if (flag == 0)
    {
        return true;
    }
}

int main()
{
    string str="sumS s#mus";
    cout<<isPalindrome(str)<<endl;
}




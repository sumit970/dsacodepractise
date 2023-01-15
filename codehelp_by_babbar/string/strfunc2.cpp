#include <iostream>
#include <string>
using namespace std;

string duplicate(string str)
{

  for (int i = 0; i < str.length();)
  {

    if (str[i] == str[i + 1])
    {

      str.erase(str[i], 2);

      if (i > 0)
      {
        i--;
      }
      else
      {
        i++;
      }
    }
  }
  return str;
}
int main()
{

  string str1 = "mynnmeemsees";
  cout << duplicate(str1) << endl;
  // cout << str.compare(str1);
  
}
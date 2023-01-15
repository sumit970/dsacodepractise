#include <iostream>
#include<string>
using namespace std;


int main(){

string stri="Test string";
//   for ( string ::iterator it=str.begin(); it!=str.end(); it++)
//     cout << *it<<endl;
// //   cout << '\n'; 
// str.begin();

// for(string::iterator i=str.begin();i!=str.end(); i++){
//     cout << *i<<endl;
// }

// for(string::iterator i=str.begin();i!=str.end(); i++){
//     cout<<*i<<endl;
// }
// }
// std::string str ("now step live...");
//   for (auto::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
//     std::cout << *rit;
//   return 0;
int size=stri.size();

  for(int i=0;i<stri.size();i++){
    cout<<stri[i]<<"\n";
  }

  //return number of string characters into the string func.
  cout<<stri.size()<<"\n";


  for(int i=0;i<stri.size();i++){
    cout<<stri[i]<<"\n";
  }
  //returns the number of characters in the string 
  cout<<stri.length()<<"\n";

//   return 0;

   cout << "size: " << stri.size() << "\n";
  cout << "length: " << stri.length() << "\n";
  cout << "capacity: " << stri.capacity() << "\n";
  cout << "max_size: " << stri.max_size() << "\n";
  stri.resize(stri.size()+2,'o');
  cout<<stri;

  //erase function in c++.
   string str = "This is an example sentence.";
  std::cout << str << '\n';
  cout<<str.find("is");
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."
}
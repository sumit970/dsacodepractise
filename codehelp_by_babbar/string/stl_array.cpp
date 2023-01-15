#include <iostream>
#include <array>
using namespace std;

int stlmethod()
{

    return 0;
}
int main()
{
    int basicarray[5] = {1, 2, 3, 4, 5};

    array<int, 5> arr = {1, 2, 3, 4, 5};
     //ye ek static array hai so it is not needed in cp
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    cout<<"the position at 2 is "<<arr[2]<<endl;  
    cout<<"the array is empty or not "<<arr.empty()<<endl; //0 means false and 1 means true;
    cout<<"the first element of the array is "<<arr.front()<<endl;
    cout<<"the last element of the array is "<<arr.back();
    }

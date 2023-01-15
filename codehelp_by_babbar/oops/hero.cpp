#include <iostream>
using namespace std;


class Hero{
    //properties
    public:
    string name="rameshsinghchouhan";
    int health;
    // private: 
    char level;
    int values;
    //behavior in oops is the methods 

    Hero(Hero& temp){
        cout<<"constructor is called"<<endl;
        this->level = temp.level;
        this->health = temp.health;

    }
    Hero(){
        cout<<" default constructor is called ";
    }
     Hero(int health){
        //this is a pointer to the current object.
        cout<<"this ->"<<this<<endl;

        
        this->health=health;
    }
    Hero(int health,char level){
        //this is a pointer to the current object.
        // cout<<"this ->"<<this<<endl;

        
        this->health=health;
        this->level=level;
    }

    void print ()
    {
        cout<<"level"<<this->level<<endl;
        cout<<"health"<<this->health<<endl;
    }
     
    int gethealth(){
        
        return health;
    }
    string getname(){

        return name;

    }
    void setlevel(char ch){
        level=ch;
        cout<<level<<endl;
        
    }

    void sethealth(int num){
        num=health;
        cout<<num<<endl;
        
        
    }
    


};

//access modifiers
//public -means  all the data members can be accessed through this modifiers
int main(){
  Hero ramesh(24,'c');
  ramesh.print();


// copy constructor 
 Hero R(ramesh);
 R.print();


//  :: scope resolutin operator

    //object creted statically
    // cout<<"Hi"<<endl;
    // Hero ramesh(37);
    //  Hero temp(37,'c');
    //  ramesh.print();
     
    // // the address of the current object is stored in " this " keyword.

    // cout<<endl;
    //  cout<<"finally got to know  how to call constructor"<<endl;
    //  Hero *dynamic =new Hero;
    //  dynamic->print();
    //  cout<<"finally dynamic constructor is called"<<endl;



    //dynamca=lly (th memory is stored in heap memory)
    // int *num=new int ;
    // Hero *a=new Hero;>
    
    // cout<<ramesh.getname()<<endl;
    // ramesh.setlevel('s');
    // cout<<"the level is "<<ramesh.level<<endl;
    // cout<<"the health of ramesh is "<<ramesh.gethealth();
    

    // a->setlevel(100);
    // a->sethealth(24 );
    // cout<<"the level is "<<(*a).level<<endl;
    // cout<<"the health of ramesh is "<<(*a).gethealth();
    
}
#include<iostream>
using namespace std;
class hero{

   
    //properties
    // (by default private)
    int health; 

    public:
    int level;

     // getter and setter
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }
    
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

};



int main(){

    // creation of object
    hero Ramesh;

    cout<< "Ramesh health is: "<<Ramesh.gethealth()<<endl;

   // Ramesh.health = 50;
    Ramesh.sethealth(70);
    Ramesh.level = 'A';
    
    cout<<" health is "<< Ramesh.gethealth() << endl;
    cout<<" level is "<< Ramesh.level << endl;
    // cout << sizeof(h1) << endl;
return 0;
}
#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<< "source "<< src << " destination "<<dest<<endl;
        //base case
        if(src== dest){ // ghr pohoch jaunga to ruk jaunga
        cout<<" pohoch gaya "<<endl;
        return ;
     }
     
     // src la ghri pohochvaychy tr tyala pudh nyav lagel
     // mhnje src++;

     // processing
     src ++;

     // recursive call
     reachHome(src, dest); 
     

}




int main(){

    int dest = 10; // home
    int src = 1;   // jidhar admi khada hai

    reachHome(src,dest);



}
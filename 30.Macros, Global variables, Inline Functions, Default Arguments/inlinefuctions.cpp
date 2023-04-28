#include<iostream>
using namespace std;

int getmax(int& a, int& b){
    return (a>b) ? a : b;  /*  if(a>b){
// meaning of above line ->      ans =a;                    
                                       }
                                else{
                                      ans=b;
                                         } */
}


int main(){
    int a =1 , b= 2;
    int ans = 0;

    ans = getmax(a,b);
    cout<< ans << endl;
    a= a + 3;
    b = b + 1;

    ans = getmax(a, b);
    cout<< ans << endl;


    return 0;

    

      
}
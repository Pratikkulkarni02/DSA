#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    cout<<"Value is: "<<*ptr<<endl;
    cout<<"Address is: "<<ptr<<endl;

     // ptr will give address as output
    //  *ptr will give the value 
    //   num will give the value
    //   &num will give the address
}
#include <iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,6,67};

    // arr denotes oth position(first)
   /* cout<<"Address of 1st position "<<arr<< endl; 
    cout<<"Address of 1st position "<<&arr[0]<< endl;
    cout<<"value of 1st position "<<*arr<< endl;
    cout<<*arr+1<< endl;
    cout<<"value of 1st position "<<*(arr+1)<< endl;

    int i =3;
    cout<<i[arr]<<endl;
    cout<<*(i + arr)<<endl;*/

    /*
    int temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl; // 4 value of 1st location
    cout<<sizeof(&temp)<<endl; //8 address of first location

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl; // this should be of 8 bytes but my system is showing 4
    cout<<sizeof(*ptr)<<endl; // 4 bytes
    cout<<sizeof(&ptr)<<endl; //8
    */

   int a[20] = {1,2,3,5};
   cout<< &a[0]<<endl;

   int *p = &a[0];
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;


    

    

}
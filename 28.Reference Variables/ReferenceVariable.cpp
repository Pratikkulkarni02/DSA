#include <iostream>
using namespace std;

int update2(int &n){
    n++;
}

int update1(int n){
    n++;
}


int main(){

    // int i = 5;

    // // create a referenc variable
    // int &j = i;

    // cout<< i << endl;
    // i++;
    // cout<< i << endl;
    // j++;
    // cout<< j << endl; // i and j has same memory they just share diff names

    int n = 5;
    cout<< "Befor "<< n << endl;
    update2(n);
    cout<<"After "<< n<< endl;
}
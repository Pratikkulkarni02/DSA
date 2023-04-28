#include<iostream>
using namespace std;

int score = 15; // global variable
void a(int& i){

    cout<<score<< " In a "<<endl;
    score += 1;

    cout<<i<<endl;
}

void b(int& i){

    cout<<score<< " In b "<<endl;
    cout<<i<<endl;
}

int main(){

    cout<<score<< " In main "<<endl;

    int i =5;
    a(i);
    b(i);
    return 0;
}
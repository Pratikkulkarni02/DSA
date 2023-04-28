#include<iostream>
using namespace std;

bool checkpalindrome(string &str, int i, int j){
    //base case
    if(i>j)
    return true; // purn string check zali ahe ani purn process zali mhnje palindrome ahe

    if(str[i] != str[j]){
        return false;
    }
    else{
        //it is a palindrome
        //recursive call
        
        return checkpalindrome(str, i+1, j=1);
    }
}

int main(){
    string name = "abba";
    cout<<endl;

    bool ans = checkpalindrome(name, 0 , name.length()-1);
    if(ans){
        cout<<"it is a palindrome"<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }

return 0;
}
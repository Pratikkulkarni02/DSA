#include<iostream>
using namespace std;

void solve(string &str, char x , int i, int &ans){
    // base case
    if(i <= 0){
        return ;
    }

    // ek case solve kro
    if(str[i] == x){
         ans = i;
         return ; // karn fkr last occurance phije, ekda ti bhetli ki mg return 
    }
    return ans;

    // baki recursion smbhal lega
    solve(str, x, i-1, ans);
}

int  main(){
    string  str;
    cin>>str;
    char x;
    cin>>x;
    int ans = -1;
    int i = str.size()-1;
    solve(str, x, i, ans);
}

#include<iostream>
using namespace std;

void solve(string &str, int s, int e){
  // base case
  if(s>=e){
    return ;
  }
  // ek case solve kro
  swap(str[s], str[e]);

  // baki recursion smbhal lega
  solve(str, s+1, e-1);
}

int main(){
  string str;
  cin>> str;
  int s = 0;
  int e =str.length()-1;
  solve(str,s, e );
  cout<< str<< endl;
}
#include <iostream>
#include<string>
using namespace std;

int main() {
    string s ;
    cin>> s;
    string ans;
    int arr[255] = {0};
    
    
    for(int i =0; i<s.size(); i+=2){
        arr[s[i]] += (s[i+1] -'0');
    }
    
    for(int i =0; i<255; i++){
        if(arr[i]!=0){
            ans += i;
            ans += (arr[i] + '0');
        }
        
    }
    cout<< ans ;
    
    

    return 0;
}
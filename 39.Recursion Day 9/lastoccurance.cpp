
// iterative solution
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
   
    int LastIndex(string s, char p){
        int ans = -1;
        for(int i =s.size()-1; i>=0; i--){
            if(s[i] == p ){
                ans = i;
                break;
            }
        }
        return ans;
    }
};


int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}



#include<vector>;
#include<math.h>
class Solution {
public:
    int countPrimes(int n) {
        
        int cnt = 0;
        vector<bool> prime(n+1, true);// true mhnje starting la sglya nos la prime consider kel
        
        //pn 0 ani 1 prime nos asu shkt nhi mhnun tyana false dil
        prime[0] = prime[1] = false;
        
        for(int i = 2; i<n; i++){
            
            if(prime[i]){ // prime astil tr count ++ kra
                cnt++;
                
                for(int j = 2*i; j<n; j=j+i){ // tables mdhe yet astil tr non prime return kra
                    prime[j] = 0;
                }
            }
        }
       return cnt;  
    }
};
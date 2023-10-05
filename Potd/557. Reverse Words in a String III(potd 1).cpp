class Solution {
public:
    string reverseWords(string s) {
        int i =0;
        int j = 0;

        while(i<s.size() ){ 
            while(j<s.size() && s[j] != ' '){ // ex: hello world : tr ya logic ne joprynt j white space prynt pohcht nhi
                    j++;                          // toprynt j++.

            } // jevha j white space prynt pohchel tevha he current loop end hoil
            reverse(s.begin()+i, s.begin()+j); // i first word chya starting la asel ani j end la, mg reverse krych.
            i = j+1;  // ith index update kelya , ex: hello world : i ani j donhi pn world chya w vr astil, karan string cha 
            j= i;     // prtek word aplyala reverse krycha ahe
        }
        return s;
    }
};
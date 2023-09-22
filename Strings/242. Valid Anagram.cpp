class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size() != t.size()){
        //     return false;
        // } no need to do this b/s both the strings are of equal size

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t){
            return true;
        }
        else{
            return false;
        }
        
    }
};
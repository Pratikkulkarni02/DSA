lass Solution {
public:
    bool isAnagram(string s, string t) {
       int frequencymap[256] = {0};
       for(int i =0; i<s.size(); i++){
           frequencymap[s[i]]++;
       }

       for(int i=0; i<t.size(); i++){
           frequencymap[t[i]]--;
       }

       for(int i =0; i<256; i++){
           if(frequencymap[i] !=0){
               return false;
           }
       }
           return true;
       }
};
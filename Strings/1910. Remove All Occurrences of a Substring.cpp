class Solution {
public:

// npos(no-position) : ekadhya string mdhe jo chota part apn shodht hoto to nhi milala
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);

// mhnje joparynt "part" main string mdhe milt ahe toprynt loop chalel
        while(pos != string::npos){
           s.erase(pos,part.length());
           pos = s.find(part); // update the pos b/s it is a looping function. update nhi kel tr infinite loop mdhe jail
                 
        }
        return s;
    }
};
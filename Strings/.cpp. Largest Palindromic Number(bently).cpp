class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> freqArr(10);

        for(char i : num){
            freqArr[i - '0']++ ;
        }
        string front = "";
        string back = "";

        for(int i =9; i>=0; i--){
            if(i==0 && front.empty()){
                continue;
            }

            while(freqArr[i] >1){
                front += to_string(i);
                back += to_string(i);
                freqArr[i] -= 2;
            }
        }
        for(int i =9; i>=0; i--){
            if(freqArr[i]){
                front += to_string(i);
                break;
            }
        }
        reverse(back.begin(), back.end());
        return front + back;

    }
};
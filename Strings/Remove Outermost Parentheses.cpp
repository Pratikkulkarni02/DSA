class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;
     
     for(int  i =0; i<s.size(); i++){
         char ch = s[i];
         if(ch == '('){
             if(!st.empty()){
             ans.push_back(ch);
             }
             st.push(ch);
         }
         else{
             st.pop();
             if(!st.empty()){
             ans.push_back(ch);
         }
         }
     }
     return ans;
    }
};
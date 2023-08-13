class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i =0;

        while(i < s.length()){
            if(ans.length()>0){// ans mdhe ek tr element aslach phije(karan apn compare krnar ahot,empty asl tr error deil)
                if(ans[ans.length()- 1] == s[i]){
                    ans.pop_back();
                }
                else{
                    ans.push_back(s[i]);
                }
            }
            else{// ans string empty ahe ani direct element insert kru shkta
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        map<int,int> mapp;
        int n = nums.size();
        int min = (n/3) + 1;

        for(int i =0; i<n; i++){
            mapp[nums[i]]++;
            if(mapp[nums[i]] == min){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};
#include <iostream>
#include<vector>
using namespace std;

void printsubarray_util(vector<int> &nums, int s, int e){
  // base case
  if(e == nums.size()){
    return;
  }
  // ek case solve kro
  for(int i =s; i<=e; i++){
    cout<< nums[i];
  }
  cout<<endl;
  // baki recursion smbhal lega
  printsubarray_util(nums, s, e+1);
}

void printsubarray(vector<int> &nums){
  for(int s = 0; s<nums.size(); s++){
    int e = s;
    printsubarray_util(nums, s, e);
  }
}

int main() {
  vector<int> nums{1,2,3,4,5};
  printsubarray(nums);
}
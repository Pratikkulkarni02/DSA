#include<istream>
using namespace std;


//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
// ignore the upper part its just the def of node
class Solution {
public:
   bool isbst(TreeNode* root, long min, long max){
       if(root == NULL ){
           return true;
       }

       
       if(root -> val > min && root -> val < max ){
           bool left = isbst(root -> left, min, root -> val);
           bool right = isbst(root -> right, root-> val, max);

           return left && right;
       }
       else{
           return false;
       }
   }

    bool isValidBST(TreeNode* root) {
        return isbst(root, LONG_MIN, LONG_MAX); //INT_MIN, INT_MAX we have to ue long here because the node value can exceed the range of int
    }
};
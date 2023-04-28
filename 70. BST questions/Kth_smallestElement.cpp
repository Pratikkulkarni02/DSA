class Solution {
public:
   vector<int> arr;
   void inorder(TreeNode* root){
       if(root == NULL){
           return ;
       }
        if(root -> left != NULL){
            inorder(root->left);
        }
       arr.push_back(root -> val);

      if(root -> right != NULL){
            inorder(root->right);
        }
   }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
     return arr[k -1];
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool solve(TreeNode*root,int maxi){
    if(root==NULL){
        return true;
    }
    if(root->val!=maxi){
        return false;
    }
   return solve(root->left, maxi) && solve(root->right, maxi);
}
    bool isUnivalTree(TreeNode* root) {
        int maxi=root->val;
       return  solve(root,maxi);
        
    }
};
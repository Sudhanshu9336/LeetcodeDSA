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
int ans=0;
int height(TreeNode* root){
    if(root==NULL) return 0;
    int lef=height(root->left);
    int righ=height(root->right);
    ans=max(ans,lef+righ);
    return 1+max(lef,righ);
}
    int diameterOfBinaryTree(TreeNode* root) {
      height(root);
      return ans;  
    }
};
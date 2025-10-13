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
int count(TreeNode* root){
    if(root==NULL)return 0;
    int left=count(root->left);
    int right=count(root->right);
     return ans = 1+(left+right);
    

}
    int countNodes(TreeNode* root) {
        count(root);
        return ans;
    }
};
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
int count=0;
void solve(TreeNode* root,long long t){
    if(root==NULL){
        return;
    }
    if(root->val==t){
        count++;
    }
    solve(root->left,t-root->val);
    solve(root->right,t-root->val);
}
void traverse(TreeNode*root,long long t){
    if(root==NULL)return;
    solve(root,t);
traverse(root->left,t);
    traverse(root->right,t);
}
    int pathSum(TreeNode* root, int targetSum) {
        traverse(root,targetSum);
        return count;
        
        
    }
};
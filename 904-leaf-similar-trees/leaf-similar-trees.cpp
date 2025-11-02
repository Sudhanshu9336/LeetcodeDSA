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
void solve(TreeNode* root,vector<int>&le){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL){
        le.push_back(root->val);
        return ;
    }
    solve(root->left,le);
    solve(root->right,le);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>le;
        solve(root1,le);
            vector<int>pe;
        solve(root2,pe);
       int n=le.size();
       int m=pe.size();
       if(n!=m)return false;
       int i=0;
       while(i<n){
        if(le[i]!=pe[i]){
            return false;
        }
        i++;
       }
        return true;
    }
};
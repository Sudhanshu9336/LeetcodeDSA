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
void minidi(TreeNode* root,vector<int>&arr){
    if(root==NULL){
        return ;
    }
    minidi(root->left,arr);
    arr.push_back(root->val);
    minidi(root->right,arr);
}
    int minDiffInBST(TreeNode* root) {
        if(root==NULL)return 0;
        vector<int>arr;
        minidi(root,arr);
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }
        return mini;

    }
};
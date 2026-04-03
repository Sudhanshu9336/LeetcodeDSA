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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        vector<vector<int>>res;
        q.push(root);
        int l=1;
        while(!q.empty()){
                 int s=q.size();
            vector<int>ans(s);
       
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                int index=(l==1)?i:(s-i-1);
                ans[index]=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            l=!l;
            res.push_back(ans);
        }
        return res;
    }
};
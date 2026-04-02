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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
        if(root==NULL)return res;
        q.push(root);
        
        while(!q.empty()){
            vector<int>ans;
            int s=q.size();
            for(int i=0;i<s;i++){

                if(q.front()->left!=NULL){
                      q.push(q.front()->left);
                }
               if(q.front()->right!=NULL){
                q.push(q.front()->right);
               }
                ans.push_back(q.front()->val);
                q.pop();
            }
    res.push_back(ans);
        }
        return res;
    }
};
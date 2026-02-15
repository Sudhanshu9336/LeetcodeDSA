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
    int maxLevelSum(TreeNode* root) {
        int ans=0;
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN;
        while(!q.empty()){
            int size=q.size();
            int current=0;
            for(int i=0;i<size;i++){
                TreeNode* v=q.front();
                q.pop();
                current=current+v->val;
                if(v->left){
                    q.push(v->left);
                }
                if(v->right){
                    q.push(v->right);
                }
            }
            level++;
            if(current>maxi){
            maxi=current;
            ans=level;
            }

        }
        return ans;
    }
};
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
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN;
        int ans=0;
        if(root==NULL)return 0;
        while(!q.empty()){
            level++;
            int sum=0;
            int s=q.size();
            for(int i=0;i<s;i++){
            sum=sum+q.front()->val;
            if(q.front()->left!=NULL){
                q.push(q.front()->left);
            }
            if(q.front()->right!=NULL){
                q.push(q.front()->right);
            }
            q.pop();
            }
            if(sum>maxi){
                maxi=sum;
                ans=level;
            }
        }
        return ans;

    }
};
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
          queue<TreeNode*>q;
        vector<vector<int>>ans;
            if(root==NULL) return ans;
            bool odd=true;
        q.push(root);
        while(!q.empty()){

            vector<int>arr;
            // TreeNode* temp=q.front();
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                arr.push_back(temp->val);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
          
            }
            if(odd==true){
              ans.push_back(arr);
              odd=false;
            }
            else {
                reverse(arr.begin(),arr.end());
                ans.push_back(arr);
                odd=true;
            }
        }
        return ans;
    }
    
};
//maine level he order kiya hu bas bool laga ke even position ko ulta kar diya hu aur khuuch nahi kiya hu 
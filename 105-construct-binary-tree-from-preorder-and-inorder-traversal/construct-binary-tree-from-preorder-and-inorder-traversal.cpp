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
int search(vector<int>&inorder,int val,int l,int r){
    while(l<=r){
        if(inorder[l]==val){
            return l;
        }
        l++;
    }
    return 0;
}
TreeNode* build(vector<int>& preorder, vector<int>& inorder,int &i,int l,int r){
    if(l>r){
        return NULL;
    }
TreeNode* root=new TreeNode(preorder[i]);
i++;
int index=search(inorder,preorder[i-1],l,r);
root->left=build(preorder,inorder,i,l,index-1);
root->right=build(preorder,inorder,i,index+1,r);
return root;

}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        int n=inorder.size();
        int l=0;
        return  build(preorder,inorder,index,l,n-1);
       
    }
};
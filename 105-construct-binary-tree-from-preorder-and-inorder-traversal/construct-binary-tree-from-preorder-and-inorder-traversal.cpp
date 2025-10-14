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
int findposition(vector<int>&inorder,int element,int instart,int inend){
    for(int i=instart;i<=inend;i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int& prestart,int instart,int inend,int n){
  if (prestart >= n || instart > inend) return NULL;


    int element=preorder[prestart++];
    TreeNode* root=new TreeNode(element);
    int position=findposition(inorder,element,instart,inend);
 
    root->left = solve(preorder, inorder, prestart, instart, position - 1, n);
root->right = solve(preorder, inorder, prestart, position + 1, inend, n);

    return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int preoderderindex=0;
        return solve(preorder,inorder,preoderderindex,0,n-1,n);
    }
};
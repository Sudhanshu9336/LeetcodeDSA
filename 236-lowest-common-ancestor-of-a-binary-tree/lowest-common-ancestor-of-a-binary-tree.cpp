/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(root==NULL)return NULL;
       if((root==p)||(root==q)){ //mai dekh raha hu ki root p ya q ke barabar hai toh wahi se return kar dunga wahi root
        return root;
         }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);//left mai traverse karna hai jub tak mile na ya NUll na mile
        TreeNode* right=lowestCommonAncestor(root->right,p,q);//same
        if(left!=NULL&&right!=NULL){  //maaan lo agr p and q dono left aur right mai mile matalb root hua 
            return root;
        }
        if(right!=NULL){// left mai nahi mila sirf right mai mila toh right he returnn karunga sudhanhsu ji ok
            return right;
        }
        if(left!=NULL){
            return left;
        }
        return NULL;

    }
};
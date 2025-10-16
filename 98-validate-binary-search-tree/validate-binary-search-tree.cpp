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
    bool isValidBST(TreeNode* root) {
        //helper function to check is this true or false
        return validate(root,LONG_MIN,LONG_MAX);
    }
    bool validate(TreeNode* node ,long minval,long maxval){
        if(node==NULL){
            return true;
        }
        if(node->val>=maxval ||node->val<=minval){
            return false;
        }
        //matlab jub left mai jayenegy to node->left mai jayenge aur jo min val vio min he rahegi aur maxval vo node ke current val ke barabar ho jayegi and sath sath mai rigjt ko bhi vheck karega ki jo min value hai vo node ki val ke bararabar hoga aur max value th max value rahega agar kisi mai se ek bhi false hua toh retur false ya true kar dega
        return validate(node->left,minval,node->val) && validate(node->right,node->val,maxval);
    }
};
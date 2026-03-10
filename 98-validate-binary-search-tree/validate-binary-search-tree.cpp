class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
    bool validate(TreeNode* node, long minvalue, long maxvalue) {
        if(node == NULL){
            return true;
        }
        if(node->val >= maxvalue || node->val <= minvalue){
            return false;
        }
        return validate(node->left, minvalue, node->val) &&
               validate(node->right, node->val, maxvalue);
    }
};
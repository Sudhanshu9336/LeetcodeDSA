class Solution {
public:
    // Helper function to find inorder successor (leftmost node in right subtree)
    TreeNode* getInorderSuccessor(TreeNode* root) {
        while (root && root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    // Main recursive delete function
    TreeNode* deletes(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;

        if (key < root->val) {
            root->left = deletes(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deletes(root->right, key);
        } 
        else {
            if (root->left == nullptr) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            if (root->right == nullptr) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            TreeNode* successor = getInorderSuccessor(root->right);
            root->val = successor->val;
            root->right = deletes(root->right, successor->val);
        }

        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return deletes(root, key);
    }
};

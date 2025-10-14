class Solution {
public:
    void solve(TreeNode* root, vector<TreeNode*>& nodes) {
        if (root==NULL) return;
        nodes.push_back(root);
        solve(root->left, nodes);
        solve(root->right, nodes);
    }

    void flatten(TreeNode* root) {
        if (!root) return;
        vector<TreeNode*> nodes;
        solve(root, nodes);

        for (int i = 0; i < nodes.size()-1 ; i++) {
            nodes[i]->left = NULL;
            nodes[i]->right = nodes[i + 1];
        }

        // nodes.back()->left = NULL;
        // nodes.back()->right = NULL;
    }
};

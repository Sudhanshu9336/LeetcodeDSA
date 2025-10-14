class Solution {
public:
    int posi(vector<int>& inorder, int element, int instart, int inend) {
        for(int i = instart; i <= inend; i++) {
            if(inorder[i] == element) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& postend, int instart, int inend) {
        if(postend < 0 || instart > inend) return NULL;

        int element = postorder[postend--];
        TreeNode* root = new TreeNode(element);

        int position = posi(inorder, element, instart, inend);

        // Build right first, then left
        root->right = solve(inorder, postorder, postend, position + 1, inend);
        root->left = solve(inorder, postorder, postend, instart, position - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postend = postorder.size() - 1;
        return solve(inorder, postorder, postend, 0, inorder.size() - 1);
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void solve(Node* &root,vector<vector<int>>&result){
    if(root==NULL)return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
              Node* node = q.front();
            ans.push_back(node->val);
            for(Node* c:node->children){
                q.push(c);
            }
            q.pop();
        }
        result.push_back(ans);
    }
}
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>result;
        solve(root,result);
        return result;
        
    }
};
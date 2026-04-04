// class Solution {
// public:
//     Node* cloneGraph(Node* node) {
//         if(node == NULL) return NULL;

//         unordered_map<Node*, Node*> mp;
//         queue<Node*> q;

//         Node* clone = new Node(node->val);
//         mp[node] = clone;

//         q.push(node);  // ✅ original node push

//         while(!q.empty()){
//             Node* curr = q.front();
//             q.pop();

//             for(auto neigh : curr->neighbors){

//                 if(mp.find(neigh) == mp.end()){
//                     mp[neigh] = new Node(neigh->val);
//                     q.push(neigh);
//                 }

//                 mp[curr]->neighbors.push_back(mp[neigh]);
//             }
//         }

//         return clone;
//     }
// };


class Solution {
public:
    unordered_map<Node*, Node*> mp;

    Node* dfs(Node* node){
        if(node == NULL) return NULL;

        // agar already clone ho chuka hai
        if(mp.find(node) != mp.end()){
            return mp[node];
        }

        // clone banao
        Node* clone = new Node(node->val);
        mp[node] = clone;

        // neighbors clone karo
        for(auto neigh : node->neighbors){
            clone->neighbors.push_back(dfs(neigh));
        }

        return clone;
    }

    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};
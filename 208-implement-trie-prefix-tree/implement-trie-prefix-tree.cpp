struct Node {
    Node* links[26];
    bool flag = false; // true if the word ends here

    bool contains(char ch) {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (!node->contains(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]); // move to the next node
        }
        node->setEnd(); // mark end of word
    }
    
    bool search(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (!node->contains(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd(); // true only if it's the end of a valid word
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for (int i = 0; i < prefix.size(); i++) {
            if (!node->contains(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true; // if we traversed successfully, prefix exists
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;

        vector<int> arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        k = k % n;       // effective rotations
        if(k == 0) return head;  // no change

        vector<int> newarr(n);

        for(int i = 0; i < n; i++){
            newarr[(i + k) % n] = arr[i];
        }

        ListNode* newHead = new ListNode(newarr[0]);
        ListNode* curr = newHead;

        for(int i = 1; i < n; i++){
            curr->next = new ListNode(newarr[i]);
            curr = curr->next;
        }

        return newHead;
    }
};

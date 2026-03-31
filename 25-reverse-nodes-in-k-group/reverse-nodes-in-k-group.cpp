class Solution {
public:

    ListNode* findkth(ListNode* head, int k){
        while(head != NULL && k > 1){
            head = head->next;
            k--;
        }
        return head;
    }

    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* pre = NULL;

        while(curr != NULL){
            ListNode* forw = curr->next;
            curr->next = pre;
            pre = curr;
            curr = forw;
        }
        return pre;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* pre = NULL;
        while(temp != NULL){
            ListNode* kth = findkth(temp, k);

            if(kth == NULL){
                if(pre != NULL){
                    pre->next = temp;
                }
                break;
            }
            ListNode* nextnode = kth->next;
            kth->next = NULL;
            ListNode* newHead = reverse(temp);
            if(temp == head){
                head = newHead;
            } else {
                pre->next = newHead;
            }
            pre = temp;
            temp = nextnode;
        }

        return head;
    }
};
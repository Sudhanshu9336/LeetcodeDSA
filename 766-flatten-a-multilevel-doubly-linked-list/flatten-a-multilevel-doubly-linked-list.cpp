class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) {
            return head;
        }

        Node* curr = head;

        while (curr != NULL) {
            if (curr->child != NULL) {

                // Save next node
                Node* next = curr->next;

                // Flatten the child list
                Node* childHead = flatten(curr->child);

                // Connect current node to child
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                // Find tail of flattened child
                Node* tail = childHead;
                while (tail->next != NULL) {
                    tail = tail->next;
                }

                // Connect tail with saved next
                if (next != NULL) {
                    tail->next = next;
                    next->prev = tail;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

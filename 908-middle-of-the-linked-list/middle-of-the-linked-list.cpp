/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* start=head;
        ListNode* forw=head;
        while(forw!=NULL&&forw->next!=NULL){
            start=start->next;
            forw=forw->next->next;
        }
        return start;
//         vector<ListNode*>arr;
//         while(start!=NULL){
//             arr.push_back(start);
//             start=start->next;
//         }
// return arr;
    }
};
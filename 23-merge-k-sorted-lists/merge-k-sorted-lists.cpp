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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
    for(auto head:lists){
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
    }
        sort(ans.begin(),ans.end());
     ListNode* dummy=new ListNode(0);
     ListNode* cur=dummy;
     for(auto it:ans){
        ListNode* temp=new ListNode(it);
        cur->next=temp;
        cur=cur->next;
     }
     return dummy->next;
    }
};
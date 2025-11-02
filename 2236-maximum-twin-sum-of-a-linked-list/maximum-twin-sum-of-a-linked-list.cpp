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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int maxi=INT_MIN;
        int i=0;
        int r=arr.size()-1;
        while(i<r){
            int sum=arr[i]+arr[r];
            maxi=max(sum,maxi);
            i++;
            r--;
        }
        return maxi;
    }
};
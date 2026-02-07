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
bool check(vector<int>&arr){
    int n=arr.size();
    int i=0;
    int end=n-1;
    while(i<=end){
        if(arr[i]!=arr[end]){
            return false;
        }
        i++;
        end--;
    }
    return true;
}
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        return check(arr);
    }
};
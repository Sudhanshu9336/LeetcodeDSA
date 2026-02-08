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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        //dekh sudhanhsu mai ja rah ahu pahle is list ka size pta karne ki kitna hai
        if(head==NULL||head->next==NULL||k==0){
            return head;
        } 
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        //ab mai ja raha hu naya listnode ki starting point search karne ki kha se start hoga ,peeche se n-k kar dunga uske peeche pauch jaunga dekho kaisse mai karne ja raha hu
        int p=n-k;
        ListNode* aagebadahao=head;
        for(int i=1;i<p;i++){
            aagebadahao=aagebadahao->next;
        }
 ListNode* newstartinghead = aagebadahao->next;
aagebadahao->next = NULL;

//confusion yaha aati hai ki hamne kyu aisa kiya dekho  hamare pass
//4->5->null aur 1->2->3 ab hame 4->5 ko head se jodna hai isliye ham 5 tak traverse karne wale end tak and in the last ham usse head se add kar dengey

// **Find last node of rotated part**
ListNode* last = newstartinghead;
while(last->next!=NULL) {
    last = last->next;
}
// **Link tail of rotated part back to original head**
last->next = head;


return newstartinghead;

        
    }
};

//we have done this by putting int the arra, then again in correct poistion of array then again building the linked list //we have created a new linked list by the element o the array taken on by one 

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(!head) return head;

//         vector<int> arr;
//         ListNode* temp = head;

//         while(temp){
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }

//         int n = arr.size();
//         k = k % n;       // effective rotations
//         if(k == 0) return head;  // no change

//         vector<int> newarr(n);

//         for(int i = 0; i < n; i++){
//             newarr[(i + k) % n] = arr[i];
//         }

//         ListNode* newHead = new ListNode(newarr[0]);
//         ListNode* curr = newHead;

//         for(int i = 1; i < n; i++){
//             curr->next = new ListNode(newarr[i]);
//             curr = curr->next;
//         }

//         return newHead;
//     }
// };

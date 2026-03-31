class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> result;

    //pahle mai sisze() nikalunga ki kitna element iske ander exit karte hai 
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
//  kine element part mai hongy yeh dekh rahe hai aur kitne extra hai hamre pass yeh mmai dekh raha hu 
        int part = n / k;
        int extra = n % k;

      //jitne part hongey utne baaar mai for loop chalunga 
        for(int i = 0; i < k; i++){
            ListNode* partHead = head;
            int size = part + (extra > 0 ? 1 : 0);
            if(extra > 0) extra--;
            // move to last node of this part
            for(int j = 0; j < size - 1; j++){
                if(head != NULL)
                    head = head->next;
            }
            if(head != NULL){
                ListNode* nextPart = head->next;
                head->next = NULL;
                head = nextPart;
            }
            result.push_back(partHead);
        }
        return result;
    }
};
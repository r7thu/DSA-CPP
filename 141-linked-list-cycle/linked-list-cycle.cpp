
class Solution {
public:
    //TORTOISE and HARE used here
    // Very Brilliant idea TC O(N) SC O(1)
    bool hasCycle(ListNode *head) {
    ListNode* slow=head;  
    ListNode* fast=head; 
     
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
    }
};
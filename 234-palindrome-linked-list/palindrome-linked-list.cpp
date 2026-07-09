class Solution {
public:
    // 
    // Brute Force Solution
    // Made a stack added the values to it
    // Then compared the value of stack and the Linked List
    //  
    bool isPalindrome(ListNode* head) {

     ListNode* slow=head;
     ListNode* fast=head;
     while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
     }
    //  slow->next=NULL;
     ListNode* current =slow;
     ListNode* prev =NULL;
     while(current){
        ListNode* front =current->next;
        current->next=prev;
        prev=current;
        current=front;
     }

     ListNode* temp=head;
     while(prev){
        if(prev->val!=temp->val)
            return false;
        prev=prev->next;
        temp=temp->next;
     }
    
     return true;
    }
};
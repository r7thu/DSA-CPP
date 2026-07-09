class Solution {
public:
    // 
    // Optimal Solution
    // So what we did here is foound the middle element using TORTOISE AND HARE Algo
    // Then From Mid to end of the linked list we Reversed 
    // [1,2,3,3,2,1] => [1,2,3,1,2,3]
    // but the connection between 3 and 3 is still there
    // now we check if each element from the start to mid and mid to end is same
    //
    //
    bool isPalindrome(ListNode* head) {

     //Tortoise and Hare
     ListNode* slow=head;
     ListNode* fast=head;
     while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
     }

     //Reversing Part
     ListNode* current =slow;
     ListNode* prev =NULL;
     while(current){
        ListNode* front =current->next;
        current->next=prev;
        prev=current;
        current=front;
     }


    //Comparing Part
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

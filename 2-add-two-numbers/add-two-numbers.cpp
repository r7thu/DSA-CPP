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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // In Actual Approach Dont use temp1 and temp2 use l1 and l2 itself no issues
        // Normal Addition Logic and carry Logic
        // Easy to understand and implememnt
        // Main Thing to study is how to create a new LinkedList use a dummy node and a temp
        
        ListNode* temp1=l1; 
        ListNode* temp2=l2;
        ListNode* Dummy= new ListNode(-1);
        ListNode* temp =Dummy;
        int carry=0;
        while(temp1 || temp2){
            int sum=0;
            if(temp1){
                sum=sum+temp1->val;
                temp1=temp1->next;
            }
            if(temp2){
                sum=sum+temp2->val;
                temp2=temp2->next;
            }
            
            sum=sum+carry;
            int val=sum%10;

            carry=sum/10;//Better Carry Logic IMP
            
            temp->next= new ListNode(val);
            temp=temp->next;

        }
        if(carry){
            temp->next=new ListNode(carry);
        }
        
        return Dummy->next;
    }
};
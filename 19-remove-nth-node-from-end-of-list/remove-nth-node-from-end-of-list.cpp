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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Brute Force approach
        // Easy Idea 
        // TC O(N+N-n)
        // SC O(1)
        ListNode* temp=head;
        ListNode* temp1=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        int val= count-n;
        if (val == 0) return head->next;
        // Only need Till val-1 as we are going to temp->next each time
        for(int i=0;i<val-1;i++){
            temp1=temp1->next;
        }
        ListNode* delNode= temp1->next;
        temp1->next=temp1->next->next;
        delete delNode;
        return head;
    }
};
class Solution {
public:
    // Brute Force Approach
    // Idea --> remove last element and attach it at the front of the linked list K times this will rotate the matrix K times
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int count = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            count++;
        }
        k %= count;
        if (k == 0) return head;

        // Main Idea/Logic
        ListNode* slow=head;
        for(int i=0;i<count-k-1;i++){
            slow=slow->next;
        }
        
        tail->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
    }
};
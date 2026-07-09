/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Optimal Approach
    // Same Solution as in FindCycle
    // Used Tortoise and Hare
    // instead of returning true here we find the node where the cycle begins
    // 
    // Full Explanation
    // L1 = distance from start to cycle starting node
    // D = distance from fast to slow
    // Length of full cycle L1+D
    // if distance bw fast and slow is D then d no of iteration is needed
    // for slow==fast to happen
    // in d iterations slow will move d steps from the cycle starting node
    // that means the rest of the distancs is L1
    // So we can say both distance is L1
    // So the point of collision will be the starting node of cycle
    
    ListNode *detectCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
    }

};
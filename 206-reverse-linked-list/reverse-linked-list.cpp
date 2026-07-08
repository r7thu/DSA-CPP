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
    // Recursive Solution
    // Optimal Approach
    // O(N) TC , O(N) SC due to calling stack
   
    ListNode* reverseList(ListNode* head) {

        //// This much code is for finding the head
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        // After Finding which just pass it back till 1st recursion

        //CORE IDEA of recursion 
        // here we are changing the arrows 
        // Draw and check for better understanding
        head->next->next = head;
        head->next = NULL; 
        return newHead;
    }
};
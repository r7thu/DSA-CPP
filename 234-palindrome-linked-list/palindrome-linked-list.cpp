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
    // 
    // Brute Force Solution
    // Made a stack added the values to it
    // Then compared the value of stack and the Linked List
    //  
    bool isPalindrome(ListNode* head) {
     vector<int> arr;
     ListNode* temp1=head;
     ListNode* temp2=head;
     while(temp1){
        arr.push_back(temp1->val);
        temp1=temp1->next;
     }   
     int j=arr.size();
     j -=1;
     for(;j>arr.size()/2-1;j--){
        if(arr[j]!=temp2->val){
            return false;
        }
        // j--;
        temp2=temp2->next;
     }
     return true;
    }
};
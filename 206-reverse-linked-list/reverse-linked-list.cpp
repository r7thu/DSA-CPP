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
    // Brute Force Approach
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* Dummy = new ListNode(-1);
        ListNode* temp1= Dummy;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int j=arr.size()-1;j>=0;j--){
            temp1->next=new ListNode(arr[j]);
            temp1=temp1->next;
        }
        return Dummy->next;
    }
};
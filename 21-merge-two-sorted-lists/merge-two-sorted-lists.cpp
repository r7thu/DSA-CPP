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
    // Better Solution
    // My approach. it is Almost Same as Optimal
    // the brute force approach was to iterate through both list
    // and create 1 array then sort it using sort()
    // TimeComplexity O(N+M)
    // SpaceComplexity O(1)
    // We are only Relinking the Nodes of both using the Dummy node temp3
    // Basic Idea - Compare and add to the dummy node 
    // Space Complexity Wont increase as we are not creating new nodes 
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        ListNode* temp= new ListNode();
        ListNode* temp3= temp;
        while(temp1 && temp2)
        {
            if(temp1->val<temp2->val){
                temp->next=temp1;
                temp1=temp1->next;
            }
            else{
                temp->next=temp2;
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        if(temp1){
            temp->next=temp1;
        }
        if(temp2){
            temp->next=temp2;
        }
        return temp3->next;
    }
};
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
    // Optimal Solution
    // TimeComplexity O(N+M)
    // SpaceComplexity O(1)
    // Best Idea where the process is being shortened when calculated
    // The while loop doest explode
    // Not Much differenece From my approach
    // But easy to understand if watched the video or just think of the algorithm sequence
    // Space Complexity Wont increase as we are not creating new nodes 
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;
        if(list1->val>list2->val){
            swap(list1,list2);
        }
        ListNode* temp= NULL;
        ListNode* ans= list1;
        while(list1 && list2){
            if(list1->val<=list2->val){
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                swap(list1,list2);
            }
        }
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;

        return ans;
    }
};
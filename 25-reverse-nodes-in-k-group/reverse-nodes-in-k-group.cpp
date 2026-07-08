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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* PrevNode=NULL;
        while(temp){
            ListNode* kthNode =temp;
            for(int i=0;i<k-1;i++){
                if(kthNode->next)
                    kthNode=kthNode->next;
                else{
                    kthNode=NULL;
                    break;
                }
            }

            if(kthNode==NULL){
                if(PrevNode)
                    PrevNode->next=temp;
                break;
            }
            ListNode* NextNode= kthNode->next;
            kthNode->next= NULL;

            ListNode* current=temp;
            ListNode* prev=NULL;
            for(int i=0;i<k;i++){
                ListNode* front =current->next;
                current->next=prev;
                prev=current;
                current=front;
            }
            if(temp==head){
                head=kthNode;
            }
            else{
                PrevNode->next=kthNode;
            }
            PrevNode=temp;
            temp= NextNode;
        }
        return head;
    }
};
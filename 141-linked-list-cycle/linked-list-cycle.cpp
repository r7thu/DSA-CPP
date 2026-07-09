
class Solution {
public:
    // Brute Force Solution
    // Use a Hash Map to see if this Node is already visited
    // If visited then return true

    bool hasCycle(ListNode *head) {
    unordered_map <ListNode* ,int> mpp; 
    // This is how you make NODE as a key in Hash Map
    ListNode* temp=head;
    while(temp){
        mpp[temp]++; 
        if(mpp[temp]>1)
            return true;
        temp=temp->next;
    } 
    return false;   
    }
};
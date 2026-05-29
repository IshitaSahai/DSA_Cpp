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
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_map<ListNode*,bool> mpp;
        while(temp!=nullptr){
            if(mpp.find(temp)==mpp.end()) mpp.insert({temp,true});
            else if(mpp.find(temp)!=mpp.end()) return true;
            temp=temp->next;
        }
        return false;
    }
};
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        unordered_map<ListNode*,bool>mpp;
        while(tempA!=nullptr){
            if(mpp.find(tempA)==mpp.end()) mpp[tempA]=true;
            tempA=tempA->next;
        }
        while(tempB!=nullptr){
            if(mpp.find(tempB)!=mpp.end()) return tempB;
            tempB=tempB->next;
        }
        return nullptr;
    }
};
/*
https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
*/
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
    int length(ListNode* head){
            int l=0;
            while(head)
                ++l,head = head->next;
            return l;
        }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m = length(headA), n = length(headB);
        if(n>m){
            swap(n, m);
            swap(headB, headA);
            }
        int i=0;
        while(i<m-n)
            ++i, headA=headA->next;
        while(headA != nullptr){
            if(headA == headB)
                return headA;
            headA=headA->next, headB = headB->next;
        }
        return nullptr;
        
    }
};
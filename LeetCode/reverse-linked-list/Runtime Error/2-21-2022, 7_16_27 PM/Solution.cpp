// https://leetcode.com/problems/reverse-linked-list

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
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* present=head;
        ListNode* next=present->next;
        
        while(present!=NULL){
            present->next=previous;
            previous=present;
            present=next;
            if(next!=NULL){
                next=next->next;
            }
            
            
        
        }
        
        return previous;
        
    }
};
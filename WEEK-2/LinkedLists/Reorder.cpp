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

    ListNode* reverse(ListNode* head){
        if(!head || !head->next)
            return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverse(slow->next);
        slow->next=nullptr;
        ListNode* start=head;
        while(rev){
            ListNode* temp1 = start->next;
            ListNode* temp2 = rev->next;

            start->next=rev;
            rev->next=temp1;

            start=temp1;
            rev=temp2;
        }
        return;
    }
};
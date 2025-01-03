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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return head;
        int start=1;
        ListNode* temp= head;
        while(start!=n){
            temp=temp->next;
            start++;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;

        while(temp && temp->next){
            temp=temp->next;
            prev=curr;
            curr=curr->next;
        }
        if(curr==head){
            return head->next;
        }
        prev->next=curr->next;
        delete curr;
        return head;
    }
};
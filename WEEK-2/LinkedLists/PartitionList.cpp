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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode* dummyRight= new ListNode(-1);
        ListNode* dummyLeft= new ListNode(-1);
        ListNode* temp=head;
        ListNode* left=dummyLeft;
        ListNode* right=dummyRight;
        while(temp){
            ListNode* nextNode=temp->next;
            if(temp->val<x){
                left->next=temp;
                left=temp;
            }else{
                right->next=temp;
                right=temp;
            }
            temp=nextNode;
        }
        right->next=NULL;
        left->next=dummyRight->next;
        head=dummyLeft->next;
        
        delete dummyLeft;
        delete dummyRight;
        return head;
    }
};
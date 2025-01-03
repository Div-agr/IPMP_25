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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head==NULL||left==right)
            return head;
        int start=1;
        ListNode* temp=head;
        ListNode* prev=head;
        while(start!=left){
            prev=temp;
            temp=temp->next;
            start++;
        }
        if(temp==NULL)
            return head;
        ListNode* first=temp;
        ListNode* second=temp->next;
        if(second==NULL)
            return head;
        while(start<right){
            ListNode* third=second->next;
            second->next=first;
            first=second;
            second=third;
            start++;
        }
        if(temp==prev){
            head=first;
        }
        prev->next=first;
        temp->next=second;
        return head;
    }
};
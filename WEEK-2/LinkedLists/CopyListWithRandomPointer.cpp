/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node* temp= head;
       while(temp){
        Node* res=temp->next;
        temp->next=new Node(temp->val);
        temp->next->next=res;
        temp=res;
       }

       temp=head;
       while(temp){
        Node* rand=temp->random;
        if(rand)
            temp->next->random=rand->next;
        else{
            temp->next->random=NULL;
        }
        temp=temp->next->next;
       }

        temp=head;
        Node* dummy=new Node(-1);
        Node* root=dummy;
        while(temp){
            dummy->next=temp->next;
            dummy=dummy->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return root->next;
    }
};
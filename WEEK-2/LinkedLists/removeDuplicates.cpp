/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/

class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        Node* i=head;
        Node* temp=head;
        while(i!=NULL && i->next!=NULL){
            i=i->next;
            if(i->data==temp->data){
                if(i->next!=NULL){
                    temp->next=i->next;
                    i->next->prev=temp;
                }
                else{
                    temp->next=NULL;
                }
                
            }
            else{
                temp=i;
            }
            
        }
        return head;
    }
};
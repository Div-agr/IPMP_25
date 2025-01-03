//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node* i=head;
        Node* j=head;
        while(j->next){
            j=j->next;
        }
        vector<pair<int,int>> v;
        while(i->data< j->data){
                if(i->data+j->data==target){
                    v.push_back({i->data,j->data});
                    i=i->next;
                }
                else if(i->data+j->data<target){
                    i=i->next;
                }
                else{
                    j=j->prev;
                }
        }
        return v;
    }
};
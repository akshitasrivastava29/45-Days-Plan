/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node*curr=head;
        Node*tail=head;
        stack<Node*>st;
        while(curr!=NULL)
        {
            if(curr->child!=NULL)
            {
                Node*child=curr->child;
                if(curr->next!=NULL)
                {
                    st.push(curr->next);
                    curr->next->prev=NULL;
                }
                curr->next=child;
                child->prev=curr;
                curr->child=NULL;
            }
            tail=curr;
            curr=curr->next;
        }
        while(!st.empty())
        {
            curr=st.top();
            st.pop();
            tail->next=curr;
            curr->prev=tail;
            while(curr!=NULL)
            {
                tail=curr;
                curr=curr->next;
            }
        }
        return head;
        
    }
};
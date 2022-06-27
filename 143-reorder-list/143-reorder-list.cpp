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
    ListNode*reverse(ListNode*head)
    {
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*nextptr;
        while(curr!=NULL)
        {
           nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        // if(head==NULL || head->next==NULL|| head->next->next==NULL)
        // {
        //     return;
        // }
        // ListNode*lastnodes=head;
        // while(lastnodes->next->next)
        // {
        //     lastnodes=lastnodes->next;
        // }
        // lastnodes->next->next=head->next;
        // head->next=lastnodes->next;
        // lastnodes->next=NULL;
        //  reorderList(head->next->next);
        
        
        // ListNode*slow=head;
        // ListNode*fast=head;
        // ListNode*prev=NULL;
        // while(fast->next && fast->next->next)
        // {
        //     fast=fast->next->next;
        //     slow=slow->next;
        // }
        // if(head->next)
        // {
        //     slow=slow->next;
        // }
        // while(slow)
        // {
        //     fast=slow->next;
        //     slow->next=prev;
        //     prev=slow;
        //     slow=fast;
        // }
        // slow=prev;
        // while(head && slow)
        // {
        //     fast=head->next;
        //     prev=slow->next;
        //     head->next=slow;
        //     slow->next=fast;
        //     head=fast;
        //     slow=prev;
        // }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*first=head;
        ListNode*second=reverse(slow->next);
        slow->next=NULL;
        while(second)
        {
        ListNode*temp1=first->next;
        ListNode*temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
        
        
    }
};
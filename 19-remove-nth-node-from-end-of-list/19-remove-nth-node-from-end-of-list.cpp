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
        // ListNode*d=new ListNode();
        // d->next=head;
        // ListNode*slow=d;
        // ListNode*fast=d;
        // for(int i=0;i<n;i++)
        // {
        //     fast=fast->next;
        // }
        // while(fast->next!=NULL)
        // {
        //     slow=slow->next;
        //     fast=fast->next;
        // }
        // slow->next=slow->next->next;
        // return d->next;
        
        ListNode*d=new ListNode();
        d->next=head;
        ListNode*slow=d;
        ListNode*fast=d;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return d->next;
        
        // ListNode*dummy=new ListNode(head);
        // ListNode*slow=dummy;
        // ListNode*fast=dummy;
        // for(int  i=0;i<n;i++)
        // {
        //     fast=fast->next;
        // }
        // while(fast->next!=NULL)
        // {
        //     slow=slow->next;
        //     fast=fast->next;
        // }
        // slow->next=slow->next->next;
        // return dummy->next;
    }
};
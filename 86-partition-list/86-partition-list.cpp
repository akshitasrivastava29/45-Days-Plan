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
      ListNode*left=new ListNode(-1);
        // ListNode*right=new ListNode(-1);
        // ListNode*ptr1=left;
        //  ListNode*ptr2=right;
        // ListNode*ptr=head;
        // while(ptr)
        // {
        //     if(ptr->val<x)
        //     {
        //         left->next=ptr;
        //         left=left->next;
        //     }
        //     else
        //     {
        //         right->next=ptr;
        //         right=right->next;
        //     }
        //     ptr=ptr->next;
        // }
        // right->next=NULL;
        // left->next=ptr2->next;
        // return ptr1->next;
        
        ListNode*smaller=new ListNode();
        ListNode*greater=new ListNode();
        ListNode*p1=smaller;
        ListNode*p2=greater;
        ListNode*p=head;
        while(p)
        {
            if(p->val<x)
            {
                smaller->next=p;
                smaller=smaller->next;
            }
            else
            {
               greater->next=p;
                greater=greater->next;
            }
            p=p->next;
        }
        greater->next=NULL;
        smaller->next=p2->next;
        return p1->next;
       
        
        
    }
};
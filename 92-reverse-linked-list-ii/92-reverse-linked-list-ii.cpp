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
//         if(head==NULL)
//         {
//             return NULL;
//         }
//         if(head->next==NULL)
//         {
//             return head;
//         }
//         if(left==right)
//         {
//             return head;
//         }
//         ListNode*dummy=new ListNode(0,head);
//         ListNode*leftprev=dummy;
//         ListNode*curr=head;
//         ListNode*nexti;
//         for(int i=1;i<left;i++)
//         {
//             leftprev=curr;
//             curr=curr->next;
//         }
//         ListNode*rightprev=0;
//         for(int i=left;i<=(right);i++)
//         {
//             nexti=curr->next;
//             curr->next=rightprev;
//             rightprev=curr;
//             curr=nexti;
//         }
//         leftprev->next->next=curr;
//         leftprev->next=rightprev;
            
//         return dummy->next;
        // _________________---
    
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        if(left==right)
        {
            return head;
        }
        ListNode*dummy=new ListNode(0,head);
        ListNode*leftprev=dummy;
        ListNode*curr=head;
        ListNode*nexi;
        for(int i=1;i<left;i++)
        {
            leftprev=curr;
            curr=curr->next;
        }
        ListNode*rightprev=0;
        for(int i=left;i<=right;i++)
        {
            nexi=curr->next;
            curr->next=rightprev;
            rightprev=curr;
            curr=nexi;
        }
        leftprev->next->next=curr;
        leftprev->next=rightprev;
        
        return dummy->next;
        
        
        
        
        
    }
};
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)
        {
            return head;
        }
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*curr=dummy;
        ListNode*prev=dummy;
        ListNode*nexi=dummy;
        int len=0;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            len++;
        }
        while(len>=k)
        {
            curr=prev->next;
            nexi=curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next=nexi->next;
                nexi->next=prev->next;
                prev->next=nexi;
                nexi=curr->next;
            }
            prev=curr;
            len-=k;
        }
        return dummy->next;
        
    }
};
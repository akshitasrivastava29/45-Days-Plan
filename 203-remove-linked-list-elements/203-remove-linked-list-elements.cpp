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
    ListNode* removeElements(ListNode* head, int val) {
       // while(head&& head->val==val)
       // {
       //     head=head->next;
       // }
       //  ListNode*curr=head;
       //  while(curr)
       //  {
       //      if(curr->next!=NULL && curr->next->val==val)
       //      {
       //          curr->next=curr->next->next;
       //      }
       //      else
       //      {
       //          curr=curr->next;
       //      }
       //  }
       //  return head;
        ListNode*temp=head;
       while(head && head->val==val)
       {
           head=head->next;
       }
        while(temp!=NULL)
        {
            if(temp->next && temp->next->val==val)
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};
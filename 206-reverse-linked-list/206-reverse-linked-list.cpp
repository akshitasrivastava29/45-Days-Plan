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
     ListNode* reverseList(ListNode* head) {
//         if(head==NULL)
//         {
//             return NULL;
//         }
//       ListNode*prevptr=NULL;
//       ListNode*currptr=head;
//       ListNode*nextptr;
//          while(currptr!=NULL)
//          {
//                 nextptr=currptr->next;
//                 currptr->next=prevptr;
//                 prevptr=currptr;
//                 currptr=nextptr;
             
//          }
//          return prevptr;
         // ___________________________--
//          if(head==NULL||head->next==NULL)
//          {
//                 return head;
//          }
         
//          ListNode*newhead=reverseList(head->next);
//          head->next->next=head;
//          head->next=NULL;
//          return newhead;
         // _________________________---
         
//          ListNode*curr=head;
//          ListNode*prev=NULL;
//          ListNode*nexti;
//          while(curr!=NULL)
//          {
//              nexti=curr->next;
//              curr->next=prev;
//              prev=curr;
//              curr=nexti;
//          }
         
//         return prev;
         // _____________________-
         // ListNode*curr=head;
         // ListNode*prev=NULL;
         // ListNode*nextptr;
         // while(curr!=NULL)
         // {
         //     nextptr=curr->next;
         //     curr->next=prev;
         //     prev=curr;
         //     curr=nextptr;
         // }
         // return prev;
         // -------------
         ListNode*curr=head;
         ListNode*prev=NULL;
         ListNode*nexi;
         while(curr!=NULL)
         {
             nexi=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nexi;
         }
         return prev;
         
    }
};
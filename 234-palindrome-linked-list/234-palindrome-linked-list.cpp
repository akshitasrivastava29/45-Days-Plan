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
//     private:
//     ListNode*reverselist(ListNode*head)
//     {
//         ListNode*curr=head;
//         ListNode*prev=NULL;
//         ListNode*nex;
//         while(curr!=NULL)
//         {
//             nex=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nex;
//         }
//         return prev;
       
//     }
    private:
//     ListNode *reverse(ListNode*head)
//     {
//         ListNode*curr=head;
//         ListNode*prev=NULL;
//         ListNode*nextptr;
//         while(curr!=NULL)
//         {
//             nextptr=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextptr;
            
//         }
//         return prev;
    // }
public:
    ListNode*reverse(ListNode*head)
    {
          ListNode*prev=NULL;
        ListNode*curr=head;
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
    bool isPalindrome(ListNode* head) {
//         if(head==NULL || head->next==NULL)
//         {
//             return true;
//         }
//         ListNode*slow=head;
//         ListNode*fast=head;
//         while(fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverselist(slow->next);
//         slow=slow->next;
//         while(slow!=NULL)
//         {
//             if(head->val!=slow->val)
//             {
//                 return false;
//             }
            
//             head=head->next;
//             slow=slow->next;
            
           
                
//         }
//         return true;
       
//         if(head==NULL || head->next==NULL)
//             return true;
        ListNode*slow=head;
        ListNode*fast=head;
//         while(  fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
        
//        slow->next=reverselist(slow->next);
//         slow=slow->next;
//         while(slow!=NULL){
//             if(head->val!=slow->val)
//             {
//                 return false;
//             }
//         head=head->next;
//         slow=slow->next;
//         }
//          return true;
        
//         if(head==NULL || head->next==NULL)
//         {
//             return true;
//         }
//         ListNode*slow=head;
//         ListNode*fast=head;
//         while(fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverse(slow->next);
//         slow=slow->next;
//         while(slow!=NULL)
//         {
//             if(head->val!=slow->val)
//             {
//                 return false;
//             }
//             head=head->next;
//             slow=slow->next;
//         }
//         return true;
        // ------------------
        
//         if(head==NULL || head->next==NULL)
//         {
//             return true;
//         }
//         while(fast->next!=NULL && fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverse(slow->next);
//         slow=slow->next;
//         while(slow!=NULL)
//         {
//             if(head->val!=slow->val)
//             {
//                 return false;
//             }
//             head=head->next;
//             slow=slow->next;
//         }
        
//       return true;
        // ------------
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        
        return true;
    }
};
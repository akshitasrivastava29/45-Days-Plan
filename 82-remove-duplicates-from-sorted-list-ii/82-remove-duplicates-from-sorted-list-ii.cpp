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
    ListNode* deleteDuplicates(ListNode* &head) {
    //  ListNode*prevptr=NULL;
    // ListNode*currptr=head;
    //  ListNode*nextptr=head->next;
    //     if(head==NULL || head->next==NULL)
    //     {
    //         return head;
    //     }
    //     while(nextptr)
    //     {
    //          if(nextptr!=NULL && currptr->val ==nextptr->val)
    //          {
    //              while(nextptr && currptr->val==nextptr->val)
    //                 {
    //                     nextptr=nextptr->next;
    //                  }
    //              if(prevptr==NULL)
    //                  {
    //                    head=nextptr;
    //                 }
    //             else
    //                 {
    //               prevptr->next=nextptr;
    //                  }
    //          }
    //     else
    //          {
    //              prevptr=currptr;
    //          }
    //     currptr=nextptr;
    //             if(nextptr!=NULL)
    //         {
    //              nextptr=nextptr->next;
    //          }
    //     }
    //     return head;
        
        
//         if(head==NULL)
//             return  0;
//         if(head->next==NULL)
//         {
//             return head;
//         }
//         int val=head->val;
//         ListNode*temp=head->next;
//         if(temp->val!=val)
//         {
//             head->next=deleteDuplicates(temp);
//             return head;
//         }
//         else
//         {
//             while(temp&&temp->val==val)
//             {
//                 ListNode*del=temp;
//                 temp=temp->next;
//                 delete del;
//             }
//             return deleteDuplicates(temp);
            
//         }
        
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
         ListNode*d=new ListNode(0,head);
        ListNode*prev=d;
        
        while(head!=NULL)
        {
            if(head->next!=NULL && head->val==head->next->val)
            {
                while( head->next!=NULL && head->val==head->next->val)
                {
                head=head->next;
                }
                prev->next=head->next;
            }
            else
            {
                prev=prev->next;
            }
            head=head->next;
        }
        return d->next;
       
        
        // if(head->val!=head->next->val)
        // {
        //     head=head->next;
        //     prev=prev->next;
        // }
        // else if(head->val==head->next->val)
        // {
        //     while(head->val!=head->next->val)
        //     {
        //         head=head->next;
        //     }
        //     prev->next=head->next;
        //     head=head->next;
        // }
        
            

        
        
    }
};
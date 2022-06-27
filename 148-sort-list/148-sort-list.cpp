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
    private:
//     ListNode*mergelist(ListNode*l1,ListNode*l2){
//        ListNode*dummy = new ListNode(0);
//         ListNode*ptr=dummy;
//         while(l1!=NULL && l2!=NULL)
//         {
//             if(l1->val <l2->val)
//             {
//                 ptr->next=l1;
//                 l1=l1->next;
//             }
//             else
//             {
//                 ptr->next=l2;
//                 l2=l2->next;
//             }
//             ptr=ptr->next;
//         }
//         if(l1!=NULL)
//         {
//             ptr->next=l1;
//             l1=l1->next;
//             ptr=ptr->next;
//         }
//         if(l2!=NULL)
//         {
//             ptr->next=l2;
//             l2=l2->next;
//             ptr=ptr->next;
//         }
//         return dummy->next;

//         }
    ListNode*mergelist(ListNode*L1,ListNode*L2)
    {
        ListNode*p1=L1;
        ListNode*p2=L2;
        ListNode*dummy=new ListNode(-1);
        ListNode*p=dummy;
        while(p1!=NULL && p2!=NULL)
        {
            if(p1->val<=p2->val)
            {
                p->next=p1;
                p1=p1->next;
            }
            else
            {
                p->next=p2;
                p2=p2->next;
            }
            p=p->next;
            
        }
        if(p1!=NULL){
            p->next=p1;
            p=p->next;
            p1=p1->next;
        }
        if(p2!=NULL)
        {
            p->next=p2;
            p=p->next;
            p2=p2->next;
        }
        return dummy->next;
    }
        
    
    
   // ListNode* mergelist(ListNode*list1,ListNode*list2)
   //  {
   //     ListNode*p1=list1;
   //     ListNode*p2=list2;
   //     ListNode*dummy=new ListNode(-1);
   //     ListNode*p3=dummy;
   //     while(p1!=NULL && p2!=NULL)
   //     {
   //         if(p1->val>=p2->val)
   //         {
   //             p3->next=p1;
   //             p1=p1->next;
   //         }
   //         else
   //         {
   //             p3->next=p2;
   //             p2=p2->next;
   //         }
   //         p3=p3->next;
   //     }
   //     while(p1!=NULL)
   //     {
   //         p3->next=p1;
   //         p1=p1->next;
   //         p3=p3->next;
       // }
       // while(p2!=NULL)
       // {
       //     p3->next=p2;
       //     p1=p1->next;
       //     p2=p2->next;
       // }
       // return dummy->next;
   
public:
    ListNode* sortList(ListNode* head) {
        
        // ListNode*temp=NULL;
        // ListNode*slow=head;
        // ListNode*fast=head;
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // while(fast!=NULL && fast->next)
        // {
        //     temp=slow;
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // temp->next=NULL;
        // ListNode*l1=sortList(head);
        // ListNode*l2=sortList(slow);
        // return mergelist(l1,l2);
        
        
        
        // ListNode*slow=head;
        // ListNode*fast=head;
        // ListNode*temp=NULL;
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // while(fast!=NULL && fast->next!=NULL)
        // {
        //     temp=slow;
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // temp->next=NULL;
        // ListNode *l1=sortList(head);
        // ListNode *l2=sortList(slow);
        // return mergelist(l1,l2);
        
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*temp=NULL;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(fast!=NULL &&  fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode*l1=sortList(head);
        ListNode*l2=sortList(slow);
        return mergelist(l1,l2);
        
    }
};
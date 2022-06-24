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
    ListNode*reverse(ListNode*head)
    {
        // ListNode*curr=head;
        //  ListNode*prev=NULL;
        //  ListNode*nexti=NULL;
        //  while(curr)
        //  {
        //      nexti=curr->next;
        //      curr->next=prev;
        //      prev=curr;
        //      curr=nexti;
        //  }
        //  head=prev;
        // return head;
        
        // __________---
    //     ListNode* curr = head,*prev = NULL,*next = NULL;
    // while(curr){
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
    // head = prev;
    // return head;
    // }
        // ______________---
        
        ListNode*cur=head;
        ListNode*prev=NULL;
        ListNode*nextptr;
        while(cur!=NULL)
        {
            nextptr=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextptr;
        }
        return prev;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
//         if(!l1 && !l2)return NULL;
//         if(!l1)return l2;
//         if(!l2)return l1;
//         l1=reverse(l1);
//         l2=reverse(l2);
//         ListNode*dummy=new ListNode(0);
//         // ListNode*p1=l1;
//         // ListNode*p2=l2;
//         ListNode*temp=dummy;
//         int carry=0;
//         while(l1 || l2|| carry)
//         {
//             int sum=0;
//             if(l1){
//             sum+=l1->val;
//             l1=l1->next;
//             }
//             if(l2)
//             {
//                 sum+=l2->val;
//                 l2=l2->next;
//             }
//             sum+=carry;
//             carry=sum/10;
//            ListNode *newnode=new ListNode(sum%10);
//             temp->next=newnode;
//             temp=temp->next;
            
//         }
//         dummy= reverse(dummy->next);
//         return dummy;
        // _____________________________---
         if(!l1 and !l2)return NULL;
    if(!l1)return l2;
    if(!l2)return l1;
    l1 = reverse(l1);
    l2 = reverse(l2);
    ListNode* headd = new ListNode(0);
    ListNode* temp = headd;
    int carry =0;
    while(l1 or l2 or carry){
        int sum =0;
        if(l1){
            sum+=l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2 = l2->next;
        }
        sum+=carry;
        carry = sum/10;
        ListNode* newnode = new ListNode(sum%10);
        temp->next = newnode;
        temp = temp->next;
        
    }
    headd = reverse(headd->next);
    return headd;
        // ______________________________
        // if(!l1 && !l2)return NULL;
        // if(!l1)return l2;
        // if(!l2)return l1;
        // l1=reverse(l1);
        // l2=reverse(l2);
        // ListNode*dummy=new ListNode(0);
        // ListNode*temp=dummy;
        // int carry=0;
        // while(l1 || l2 || carry)
        // {
        //     int sum=0;
        //     if(l1)
        //     {
        //         sum+=l1->val;
        //         l1=l1->next;
        //     }
        //     if(l2)
        //     {
        //         sum+=l2->val;
        //         l2=l2->next;
        //     }
        //     sum+=carry;
        //     carry=sum/10;
        //     ListNode*newnode=new ListNode(sum%10);
        //     temp->next=newnode;
        //     temp=temp->next;
        // }
        // dummy=reverse(dummy->next);
        // return dummy->next;
        
        
    }
};
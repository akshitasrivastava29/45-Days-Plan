/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
    // int length(ListNode*head)
    // {
    //     int l=0;
    //     ListNode*temp=head;
    //     while(temp!=NULL)
    //     {
    //         l++;
    //         temp=temp->next;
    //     }
    //     return l;
    // }
    int length(ListNode*head)
    {
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // int l1=length(headA);
        // int l2=length(headB);
        // int d=0;
        // ListNode*ptr1=headA;
        // ListNode*ptr2=headB;
        // if(l1>l2)
        // {
        //     d=l1-l2;
        //     ptr1=headA;
        //     ptr2=headB;
        // }
        // else
        // {
        //     d=l2-l1;
        //     ptr1=headB;
        //     ptr2=headA;
        // }
        // while(d!=0)
        // {
        //     ptr1=ptr1->next;
        //     if(ptr1==NULL)
        //     {
        //         return NULL;
        //     }
        //     d--;
        // }
        // while(ptr1!=NULL&&ptr2!=NULL)
        // {
        //     if(ptr1==ptr2)
        //     {
        //         return ptr1;
        //     }
        //     ptr1=ptr1->next;
        //     ptr2=ptr2->next;
        // }
        // return NULL;
        int l1=length(headA);
        int l2=length(headB);
        int dis=0;
        ListNode*p1=headA;
        ListNode*p2=headB;
        if(l1>l2)
        {
            dis=l1-l2;
            p1=headA;
            p2=headB;
        }
        else
        {
            dis=l2-l1;
            p1=headB;
            p2=headA;
        }
        while(dis!=0)
        {
            p1=p1->next;
            if(p1==NULL)
            {
                return NULL;
            }
            dis--;
        }
        while(p1!=NULL && p2!=NULL)
        {
            if(p1==p2)
            {
                return p1;
            }
            p1=p1->next;
            p2=p2->next;
        }
        return NULL;
        
        
        
    }
};
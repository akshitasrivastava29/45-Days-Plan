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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy =new ListNode(-1);
        ListNode*p1=l1;
        ListNode*p2=l2;
        ListNode*p3=dummy;
        int carry=0;
        while(p1!=NULL || p2!=NULL  || carry)
        {
            int sum=0;
            if(p1!=NULL)
            {
                sum+=p1->val;
                p1=p1->next;
            }
            if(p2!=NULL)
            {
                sum+=p2->val;
                p2=p2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* newnode=new ListNode(sum%10);
            p3->next=newnode;
            p3=p3->next;
        }
          return dummy->next;

    }
};
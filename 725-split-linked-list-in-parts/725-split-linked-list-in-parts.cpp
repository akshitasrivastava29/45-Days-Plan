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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        int len=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int numnodes=len/k;
        int extranodes=len%k;
        int i=0;
        vector<ListNode*>v;
        temp=head;
        while(temp)
        {
            v.push_back(temp);
            int currlen=1;
            while(currlen<numnodes)
            {
                temp=temp->next;
                currlen++;
            }
            if(extranodes>0 && len>k)
            {
                temp=temp->next;
                extranodes--;
            }
            ListNode*x=temp->next;
            temp->next=NULL;
            temp=x;
        }
        while(len<k)
        {
            v.push_back(NULL);
            len++;
        }
        return v;
        
    }
};
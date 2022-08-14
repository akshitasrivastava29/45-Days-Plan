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
 class comp
    {
        public:
        bool operator()(const ListNode *a, const ListNode*b)
        {
            return (a->val>b->val);
        }
    };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;   //minheap
        for(int i=0;i<k;i++)
        {
            if(lists[i]!=NULL)
            {
            pq.push(lists[i]);
            }
        }
        while(!pq.empty())
        {
            auto topi=pq.top();
            pq.pop();
            temp->next=topi;
            temp=temp->next;
            if(topi->next)
            {
                pq.push(topi->next);
            }
        }
        return dummy->next;
        
    }
};
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
    bool operator()(const ListNode*a,const ListNode*b )
    {
        return (a->val >b->val);
    }
};
class Solution {

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // priority_queue<int ,vector<int>,greater<int>>pq;
        // for(int i=0;i<lists.size();i++)
        // {
        //     ListNode*head=lists[i];
        //     while(head!=NULL)
        //     {
        //         pq.push(head->val);
        //         head=head->next;
        //     }
        // }
        // ListNode*start=NULL;
        // ListNode*end=NULL;
        // while(!pq.empty())
        // {
        //     if(start==NULL)
        //     {
        //         if(!pq.empty())
        //         start=new ListNode(pq.top());
        //         end=start;
        //         pq.pop();
        //     }
        //     else
        //     {
        //         end->next=new ListNode(pq.top());
        //         pq.pop();
        //         end=end->next;
        //     }
        // }
        // return start;
        
        
    // priority_queue<int ,vector<int>,greater<int>>pq;
    //     for(int i=0;i<lists.size();i++)
    //     {
    //         ListNode*temp=lists[i];
    //         while(temp!=NULL)
    //         {
    //             pq.push(temp->val);
    //             temp=temp->next;
    //         }
    //     }
    //     ListNode*head=NULL;
    //     ListNode*tail=NULL;
    //     while(!pq.empty())
    //     {
    //         if(head==NULL)
    //         {
    //             head=new ListNode(pq.top());
    //             tail=head;
    //             pq.pop();
    //         }
    //         else
    //         {
    //             tail->next=new ListNode(pq.top());
    //             pq.pop();
    //             tail=tail->next;
    //         }
    //     }
        // return head;
        
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        for(int i=0;i<lists.size();i++)
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
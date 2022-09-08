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
    int pairSum(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            
            ans.push_back(temp->val);
            temp=temp->next;
            
        }
        int maxtwin=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            int sum=ans[i]+ans[ans.size()-1-i];
            maxtwin=max(maxtwin,sum);
        }
       return maxtwin; 
    }
};
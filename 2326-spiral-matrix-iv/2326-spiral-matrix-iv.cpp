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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        ListNode*temp=head;
        int top=0,down=m-1,left=0,right=n-1;
        while(1)
        {
            for(int i=left;i<=right;i++)
            {
                v[top][i]=temp->val;
                temp=temp->next;
                if(temp==NULL)
                    break;
            }
            top++;
            if(temp==NULL)
             break;
            for(int i=top;i<=down;i++)
            {
                v[i][right]=temp->val;
                temp=temp->next;
                if(temp==NULL)
                    break;
            }
            right--;
            if(temp==NULL)
             break;
            for(int i=right;i>=left;i--)
            {
                v[down][i]=temp->val;
                temp=temp->next;
                if(temp==NULL) break;
            }
            down--;
            if(temp==NULL)
             break;
            for(int i=down;i>=top;i--)
            {
                v[i][left]=temp->val;
                temp=temp->next;
                if(temp==NULL)
             break;
            }
            left++;
            if(temp==NULL)
             break;
        }
        return v;
        
    }
};
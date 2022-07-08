/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
          int prevo=INT_MAX,preve=INT_MIN;
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(level%2!=0)
                {
                if(node->val>=prevo || node->val%2!=0)
                    {
                        return false;
                    }
                    prevo=node->val;
                }
                else
                {
                    if(node->val<=preve || node->val%2==0)
                    {
                        return false;
                    }
                    preve=node->val;
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            level++;
        }
        return true;
        
    }
};
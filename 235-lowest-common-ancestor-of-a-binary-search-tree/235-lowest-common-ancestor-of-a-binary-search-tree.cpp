/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(root==NULL)
        // {
        //     return NULL;
        // }
        // int curval=root->val;
        // if(curval<p->val && curval<q->val)
        // {
        //     return  lowestCommonAncestor(root->right,p,q);
        // }
        // if(curval>p->val && curval>q->val)
        // {
        //     return lowestCommonAncestor(root->left,p,q);
        // }
        // return root;
        
        if(root==NULL)
        {
            return NULL;
        }
        int curval=root->val;
        if(curval<p->val && curval<q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        if(curval>p->val && curval>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
       return root; 
    }
};
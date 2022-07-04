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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p==NULL || q==NULL)
        // {
        //     return (p==q);
        // }
        // return ((p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));
        
        // if(p==NULL || q==NULL)
        // {
        //     return (p==q);
        // }
        // if ((p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right))
        // {
        //     return true;
        // }
        // return false;
        
        if(!p || !q)
        {
            return (p==q);
        }
        if((p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right))
        {
            return true;
        }
        return false;
            
    }
};
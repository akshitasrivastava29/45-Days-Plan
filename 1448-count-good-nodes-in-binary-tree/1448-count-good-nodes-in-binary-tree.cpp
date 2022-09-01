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
    int cnt=0;
    void inorder(TreeNode*root,int max)
    {
        if(root==NULL) return ;
        if(max<root->val)
        {
            max=root->val;
        }
        inorder(root->left,max);
        if(root->val>=max)
        {
            cnt++;
            max=root->val;
        }
        inorder(root->right,max);
    }
    public:
    int goodNodes(TreeNode* root) {
        int max=root->val;
        inorder(root,max);
        return cnt;
        
    }
};
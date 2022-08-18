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
    int  getheight(TreeNode*node)
    {
        if(!node) return 0;
        int lh=getheight(node->left);
        int rh=getheight(node->right);
        if(lh==-1 || rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(getheight(root)!=-1)
        {
            return true;
        }
       return false; 
    }
};
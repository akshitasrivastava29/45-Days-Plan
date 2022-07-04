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
    int maxDepth(TreeNode* root) {
        // if(root==NULL)
        // {
        //     return 0;
        // }
        // int leftheight=maxDepth(root->left);
        // int rightheight=maxDepth(root->right);
        // return 1+max(leftheight,rightheight);
        
        
        // if(root==NULL)
        // {
        //     return 0;
        // }
        // int lefth=maxDepth(root->left);
        // int righth=maxDepth(root->right);
        // return max(lefth,righth)+1;
        
        if(root==NULL)return 0;
        int lefth=maxDepth(root->left);
        int righth=maxDepth(root->right);
        return 1+max(lefth,righth);
        
    }
};
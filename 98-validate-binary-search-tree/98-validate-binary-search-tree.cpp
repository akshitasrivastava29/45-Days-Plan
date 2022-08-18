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
    private:
    // bool isValid(TreeNode*root,int *lower,int *upper)
    // {
    //     if(root==NULL)
    //     {
    //         return true;
    //     }
    //     if(upper && root->val>=*upper ||lower && root->val<=*lower)return false;
    //     return isValid(root->left,lower,&(root->val)) && isValid(root->right,&(root->val),upper);
    // }
    bool range(TreeNode* root,int *lower,int *upper)
    {
        if(root==NULL)
        {
            return true;
        }
        if(upper && root->val>=*upper || lower && root->val<=* lower)return false;
        return range(root->left,lower,&(root->val)) && range(root->right,&(root->val),upper);
    }
public:
    bool isValidBST(TreeNode* root) {
        // return isValid(root,NULL ,NULL);
        
        return range(root,NULL,NULL);
        
    }
};
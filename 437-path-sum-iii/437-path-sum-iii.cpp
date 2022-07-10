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
    int ans=0;
    private:
    void solve(TreeNode*root,int targetSum,long long sum)
    {
        if(!root)return ;
        if(targetSum==sum)
        {
            ans=ans+1;
        }
        if(root->left) solve(root->left,targetSum,sum+root->left->val);
        if(root->right) solve(root->right,targetSum,sum+root->right->val);
    }
 public:
   
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        solve(root,targetSum,root->val);
        
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return ans;

    }
};
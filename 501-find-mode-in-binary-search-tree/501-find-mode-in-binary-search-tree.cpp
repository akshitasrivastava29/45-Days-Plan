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
    unordered_map<int,int>mp;
    void fun(TreeNode*root,int &mx)
    {
        if(root==NULL)
        {
            return ;
        }
        fun(root->left,mx);
        mp[root->val]++;
        mx=max(mx,mp[root->val]);
        fun(root->right,mx);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>res;
        int mx=INT_MIN;
        fun(root,mx);
        for(auto it:mp)
        {
            if(it.second==mx)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};
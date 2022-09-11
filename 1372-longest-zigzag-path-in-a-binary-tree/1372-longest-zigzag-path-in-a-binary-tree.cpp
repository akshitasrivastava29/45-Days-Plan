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
    int ans=-1;
    pair<int,int>dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
            pair<int,int>leftchild=dfs(root->left);
            pair<int,int>rightchild=dfs(root->right);
            ans=max({ans,1+leftchild.second,1+rightchild.first});
           
        
         return {1+leftchild.second,1+rightchild.first};
    }
public:
    int longestZigZag(TreeNode* root) {
        dfs(root);
        return ans-1;
        
    }
};
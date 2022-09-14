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
    void dfs(TreeNode*root,vector<int>freq,int &cnt)
    {
        if(root==NULL)
        {
            return ;
        }
        freq[root->val]++;
        dfs(root->left,freq,cnt);
        if(root->left==NULL && root->right==NULL)
        {
            int odd=0;
            for(auto x:freq)
            {
                if(x%2==1)
                {
                    odd++;
                }
            }
            if(odd<=1)
            {
                cnt++;
            }
        }
        dfs(root->right,freq,cnt);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        int cnt=0;
        dfs(root,freq,cnt);
        return cnt;
    }
};
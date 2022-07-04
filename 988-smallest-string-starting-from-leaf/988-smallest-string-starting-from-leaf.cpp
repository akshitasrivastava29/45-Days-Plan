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
    string ans;
    void solve(TreeNode* root,string curr)
    {
        if(root->left==NULL && root->right==NULL)
        {
            curr+=(root->val+'a');
            reverse(curr.begin(),curr.end());
            if(curr.length()>0 && ans>curr)
            {
                ans=curr;
               
            }
             reverse(curr.begin(),curr.end());
            return ;
        }
        curr+=(root->val+'a');
        if(root->left) solve(root->left,curr);
        if(root->right)solve(root->right,curr);
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        ans=string(1,'z'+1);
        solve(root,"");
        return ans;
        
        
    }
};
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
//     vector<int>v;
//     void solve(TreeNode* root)
//     {
//         if(root==NULL)
//             return ;
//         v.push_back(root->val);
//         solve(root->left);
//         solve(root->right);
//         return ;
    // --------------------------
    int mini=INT_MAX;
    int prev=-1;
        private:
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        if(prev!=-1)
        {
            mini=min(mini,root->val-prev);
        }
        prev=root->val;
        inorder(root->right);
    }
    
//     }
public:
    int getMinimumDifference(TreeNode* root) {
        // solve(root);
        // sort(v.begin(),v.end());
        // int mini=INT_MAX;
        // for(int i=1;i<v.size();i++)
        // {
        //     mini=min(mini,v[i]-v[i-1]);
        // }
        // return mini;
        // -------------------------
        
        inorder(root);
        return mini;
    }
};
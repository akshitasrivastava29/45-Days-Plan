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
    void path(TreeNode* root,vector<string>&ans,string str)
    {
        if(root==NULL ) return;
        if(root->left==NULL && root->right==NULL)
        {
            str+=to_string(root->val);
            ans.push_back(str);
        }
        else
        {
            str+=to_string(root->val)+"->";
        }
        path(root->left,ans,str);
        path(root->right,ans,str);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string str="";
        path(root,ans,str);
        return ans;
        
    }
};
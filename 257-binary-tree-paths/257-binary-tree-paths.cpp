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
//     void path(TreeNode* root,vector<string>&ans,string s)
//     {
//         if(root==NULL)
//         {
//             return ;
//         }
//         if(root->left==NULL && root->right==NULL)
//         {
//             s+=to_string(root->val);
//                ans.push_back(s);
//         }
//         else{

//             s+=to_string(root->val)+"->";
//         }
        
//         path(root->left,ans,s);
//         path(root->right,ans,s);
        
//     }
    // private:
    // void getpath(TreeNode* root,vector<string>&ans,string s)
    // {
    //     if(root==NULL)
    //     {
    //         return;
    //     }
    //     if(root->left==NULL && root->right==NULL)
    //     {
    //         s+=to_string(root->val);
    //         ans.push_back(s);
    //     }
    //     else{
    //         s+=to_string(root->val)+"->";
    //     }
    //     getpath(root->left,ans,s);
    //     getpath(root->right,ans,s);
    // }
    private:
    void paths(TreeNode*root,vector<string>&ans,string str)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            str+=to_string(root->val);
            ans.push_back(str);
        }
        else
        {
            str+=to_string(root->val)+"->";
        }
        paths(root->left,ans,str);
        paths(root->right,ans,str);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string>ans;
//         string str="";
//          path(root,ans,str);
//         return ans;
        
        
        // vector<string>ans;
        // string s="";
        // getpath(root,ans,s);
        // return ans;
        
        vector<string>ans;
        string str="";
        paths(root,ans,str);
        return ans;
        
        
    }
};
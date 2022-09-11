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
//     vector<int>ans;
//     void inorder(TreeNode*root)
//     { 
        
//         if(root==NULL) return ;
//         inorder(root->left);
//         ans.push_back(root->val);
//         inorder(root->right);
//     }
    
    
    // void inorderT(TreeNode* root,vector<int>&v)
    // {
    //     if(root==NULL) return ;
    //     inorderT(root->left,v);
    //     v.push_back(root->val);
    //     inorderT(root->right,v);
    // }
public:
    vector<int> inorderTraversal(TreeNode* root) {
    //    inorder(root);
        
    // return ans;
        
        
        // vector<int>v;
        // inorderT(root,v);
        // return v;
        
        stack<TreeNode*>st;
        TreeNode*node=root;
        vector<int>v;
        while(true)
        {
            if(node!=NULL)
            {
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty())
                {
                    break;
                }
                node=st.top();
                st.pop();
                v.push_back(node->val);
                node=node->right;
            }
        }
        return v;
        
     }
};
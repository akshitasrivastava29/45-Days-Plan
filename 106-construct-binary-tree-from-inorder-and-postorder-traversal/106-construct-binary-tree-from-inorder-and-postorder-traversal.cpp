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
//     int ind;
//     unordered_map<int,int>mp;
    
//     TreeNode *CreateTree(vector<int>&inorder,vector<int>&postorder,int st,int end)
//     {
       
//         if(st>end)
//         {
//             return NULL;
//         }
//         TreeNode*root=new TreeNode(postorder[ind--]);
//          if(st==end)return root;
//         int mid=mp[root->val];
//         root->right=CreateTree(inorder,postorder,mid+1,end);
//         root->left=CreateTree(inorder,postorder,st,mid-1);
//         return root;
//     }
    int ind;
    unordered_map<int,int>mp;
    TreeNode*CreateTree(vector<int>&inorder,vector<int>&postorder,int st,int end)
    {
        if(st>end)return NULL;
        TreeNode*root=new TreeNode(postorder[ind--]);
        if(st==end)return root;
        int mid=mp[root->val];
        
        root->right=CreateTree(inorder,postorder,mid+1,end);
        root->left=CreateTree(inorder,postorder,st,mid-1);
        return root;
    }
    

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        if(inorder.size()!=postorder.size())
//           {
//               return NULL;
//           }
//          ind=postorder.size()-1;
        
//         for(int i=0;i<inorder.size();i++)
//         {
//             mp[inorder[i]]=i;
//         }
//          TreeNode* root=CreateTree(inorder,postorder,0,inorder.size()-1);
//         return root;
        if(inorder.size()!=postorder.size())
        {
            return NULL;
        }
         ind=postorder.size()-1;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode*root=CreateTree(inorder,postorder,0,inorder.size()-1);
        return root;
    }
};
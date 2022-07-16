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
//     int preInd=0;
//     private:
//     TreeNode*CreateTree(vector<int>&preorder,vector<int>&inorder,int start,int end)
//     {
//         if(start>end)
//         {
//             return NULL;
//         }
//         TreeNode*node=new TreeNode(preorder[preInd++]);
//         int pos;
//         for(int i=start;i<=end;i++)
//         {
//             if(inorder[i]==node->val)
//             {
//                 pos=i;
//                 break;
//             }
//         }
//         node->left=CreateTree(preorder,inorder,start,pos-1);
//         node->right=CreateTree(preorder,inorder,pos+1,end);
//         return node;
    
//     }
    // ------
//     int previ=0;
//     private:
//     TreeNode*createTree(vector<int>&preorder,vector<int>&inorder,int st,int end)
//     {
//         if(st>end)return NULL;
        
    
//     TreeNode*node=new TreeNode(preorder[previ++]);
//     int pos;
//     for(int i=st;i<end;i++){
//         if(inorder[i]==node->val)
//         {
//             pos=i;
//             break;
//         }
//     }
//     node->left=createTree(preorder,inorder,st,pos-1);
//     node->right=createTree(preorder,inorder,pos+1,end);
//     return node;
//     }
    // ----
    int prevind=0;
    private:
    TreeNode*createTree(vector<int>&preorder,vector<int>&inorder,int st,int end)
    {
        if(st>end)return NULL;
        TreeNode*node=new TreeNode(preorder[prevind++]);
        int pos;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==node->val)
            {
                pos=i;
                break;
            }
        }
        node->left=createTree(preorder,inorder,st,pos-1);
        node->right=createTree(preorder,inorder,pos+1,end);
        return node;
        
    }
    
    public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // return CreateTree(preorder,inorder,0,inorder.size()-1);
        int n=inorder.size();
        return createTree(preorder,inorder,0,n-1);
    }
    // -------
    
    
    
    
};
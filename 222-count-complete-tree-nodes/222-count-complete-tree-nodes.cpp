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
   //  private:
   // int  findHL(TreeNode* node)
   // {
   //     int height=0;
   //     while(node)
   //       {
   //         height++;
   //         node=node->left;
   //      }
   //     return height;
   // }
   //  int findHR(TreeNode* node)
   //  {
   //      int height=0;
   //      while(node)
   //      {
   //          height++;
   //          node=node->right;
   //      }
   //      return height;
   //  }
    // -----------------------------------------
public:
    int countNodes(TreeNode* root) {
//         if(root==NULL)return 0;
//         int leftsubtree=findHL(root);
//         int rightsubtree=findHR(root);
//         if(leftsubtree==rightsubtree)
//         {
//             return (1<<rightsubtree)-1;
//         }
//             return 1+countNodes(root->left)+countNodes(root->right);
        // -----------
        
        
        // if(!root)return 0;
        // int lh=1;
        // int rh=1;
        // TreeNode*leftsubtree=root->left;
        // TreeNode*rightsubtree=root->right;
        // while(leftsubtree)
        // {
        //     leftsubtree=leftsubtree->left;
        //         lh+=1;
        // }
        // while(rightsubtree)
        // {
        //     rightsubtree=rightsubtree->right;
        //     rh+=1;
        // }
        // if(lh==rh)
        //     return pow(2,lh)-1;
        // else
        //     return 1+countNodes(root->left)+countNodes(root->right);
        // -----------------
        if(!root)return 0;
        int lh=1,rh=1;
        TreeNode*leftsubtree=root->left;
        TreeNode*rightsubtree=root->right;
        while(leftsubtree)
        {
            leftsubtree=leftsubtree->left;
            lh+=1;
        }
        while(rightsubtree)
        {
            rightsubtree=rightsubtree->right;
            rh+=1;
        }
        if(lh==rh)
        {
            return pow(2,lh)-1;
        }
        else
        
            return 1+countNodes(root->left)+countNodes(root->right);
        
        
        
    }
};
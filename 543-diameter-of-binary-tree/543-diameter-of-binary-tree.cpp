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
    // private:
    // int findmax(TreeNode* node,int &maxi)
    // {
    //     if(node==NULL)
    //     {
    //         return 0;
    //     }
    //     int lh=findmax(node->left,maxi);
    //     int rh=findmax(node->right,maxi);
    //     maxi=max(maxi,lh+rh);
    //     return 1+max(lh,rh);
    // }
    private:
    // int getmax(TreeNode*node,int &dia)
    // {
    //     if(node==NULL)return NULL;
    //     int lh=getmax(node->left,dia);
    //     int rh=getmax(node->right,dia);
    //     dia=max(dia,lh+rh);
    //     return 1+max(lh,rh);
    // }
    int getmaxht(TreeNode* node,int &d)
    {
        if(!node)return 0;
        int lh=getmaxht(node->left,d);
        int rh=getmaxht(node->right,d);
        d=max(d,lh+rh);
        return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // int maxi=0;
        // findmax(root,maxi);
        // return maxi;
        
        
        // int dia=0;
        // getmax(root,dia);
        // return dia;
        
        int d=0;
        getmaxht(root,d);
        return d;
        
        
        
      
        
    }
};
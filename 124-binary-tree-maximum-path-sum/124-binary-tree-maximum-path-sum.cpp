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
    // int maxPathDown(TreeNode*node,int&maxi)
    // {
    //     if(node==NULL)
    //     {
    //         return 0;
    //     }
    //     int left=max(0,maxPathDown(node->left,maxi));
    //     int right=max(0,maxPathDown(node->right,maxi));
    //     maxi=max(maxi,left+right+node->val);
    //     return max(left ,right)+node->val;
    // }
    private:
    // int maxpathdown(TreeNode*node,int &maxi)
    // {
    //     if(node==NULL)
    //         return 0;
    //     int left=max(0,maxpathdown(node->left,maxi));
    //     int right=max(0,maxpathdown(node->right,maxi));
    //     maxi=max(maxi,left+right+node->val);
    //     return max(left,right)+node->val;
    // }
    
    // --------
    int maxpath(TreeNode*node,int &maxi)
    {
        if(node==NULL)return 0;
        int left=max(0,maxpath(node->left, maxi));
        int right=max(0,maxpath(node->right,maxi));
        maxi=max(maxi,left+right+node->val);
        return max(left,right)+node->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        // int maxi=INT_MIN;
        // maxPathDown(root,maxi);
        // return maxi;
        
        
        
        // int maxi=INT_MIN;
        // maxpathdown(root,maxi);
        // return maxi;
        
        int maxi=INT_MIN;
        maxpath(root,maxi);
        return maxi;
        
        
    }
};
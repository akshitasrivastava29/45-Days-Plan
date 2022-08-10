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
    TreeNode*getmid(vector<int>&nums,int low,int high)
    {
        int n=nums.size();
        if(low>=high)return NULL;
        int mid=low+(high-low)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=getmid(nums,low,mid);
        root->right=getmid(nums,mid+1,high);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return getmid(nums,0,n);
        
        
    }
};
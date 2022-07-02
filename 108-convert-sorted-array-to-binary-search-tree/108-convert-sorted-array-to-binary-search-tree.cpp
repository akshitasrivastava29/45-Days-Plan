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
//     private:
//     TreeNode*findmid(vector<int>&nums,int st,int end)
//     {
//        if(st>=end)
//         return NULL;
//             int mid=st+(end-st)/2;
//             TreeNode*node=new TreeNode(nums[mid]);
//             node->left=findmid(nums,st,mid);
//             node->right=findmid(nums,mid+1,end);
//             return node;
        
     
//     }
    private:
    TreeNode*getmid(vector<int>&nums,int st,int end)
    {
        if(st>=end)return NULL;
        int mid=st+(end-st)/2;
        TreeNode*temp=new TreeNode(nums[mid]);
        temp->left=getmid(nums,st,mid);
        temp->right=getmid(nums,mid+1,end);
        return temp;
        
    }
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // return findmid(nums,0,nums.size());
        return getmid(nums,0,nums.size());
        
    }
};
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
//     int checkH(TreeNode* root)
//     {
//         if(root==NULL)
//         {
//             return 0;
//         }
//         int lh=checkH(root->left);
//         int rh=checkH(root->right);
//         if(lh==-1||rh==-1)
//         {
//             return -1;
//         }
//         if(abs(lh-rh)>1)
//         {
//             return -1;
//         }
//         return max(lh,rh)+1;

//     }
    private:
    // int checkHt(TreeNode* root)
    // {
    //     if(root==NULL)return 0;
    //     int lh=checkHt(root->left);
    //     int rh=checkHt(root->right);
    //     if(lh==-1 || rh==-1)return -1;
    //     if(abs(lh-rh)>1)return -1;
    //     return max(lh,rh)+1;
    // }
     
    int height(TreeNode*root)
    {
        if(root==NULL)return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh==-1 || rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1)
        {
            return -1;
        }
        return max(lh,rh)+1;

    }
public:
    bool isBalanced(TreeNode* root) {
        // return checkH(root)!=-1;
        // if(checkHt(root)!=-1)
        // {
        //     return true;
        // }
        // return false;
        if(height(root)!=-1)
        {
            return true;
        }
        return false;
    }
};
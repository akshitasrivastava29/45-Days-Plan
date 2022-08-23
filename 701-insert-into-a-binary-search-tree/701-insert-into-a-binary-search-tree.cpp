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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return new TreeNode(val);
        }
        TreeNode*node=root;
        while(root)
        {
            if(val<node->val)
            {
                if(node->left)
                {
                    node=node->left;
                }
                else
                {
                    TreeNode*temp=new TreeNode(val);
                    node->left=temp;
                    break;
                }
            }
            else
            {
                if(node->right)
                {
                    node=node->right;
                }
                else
                {
                    TreeNode*temp=new TreeNode(val);
                    node->right=temp;
                    break;
                }
            }
        }
        return root;
        
    }
};
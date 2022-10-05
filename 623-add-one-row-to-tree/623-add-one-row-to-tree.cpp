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
private:
    void f(TreeNode* root,TreeNode* parent,int val,int depth) {
        if (root==NULL) return;
        if (depth==2) {
            TreeNode* l=new TreeNode(val),*r=new TreeNode(val);
            l->left=root->left;
            root->left=l;
            r->right=root->right;
            root->right=r;
            return;
        }
        f(root->left,root,val,depth-1);
        f(root->right,root,val,depth-1);
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth==1) {
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        f(root,NULL,val,depth);
        return root;
    }
};
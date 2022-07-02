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
    // void CreateTree(TreeNode* &root,TreeNode* root1,TreeNode* root2)
    // {
    //     if(root1==NULL && root2==NULL)root=NULL ;
    //     else if(root1==NULL && root2!=NULL){
    //         root=new TreeNode(root2->val);
    //         CreateTree(root->left,NULL,root2->left);
    //         CreateTree(root->right,NULL,root2->right);
    //     }
    //     else if(root1!=NULL && root2==NULL)
    //     {
    //         root=new TreeNode(root1->val);
    //         CreateTree(root->left,root1->left,NULL);
    //         CreateTree(root->right,root1->right,NULL);
    //     }
    //     else
    //     {
    //         root=new TreeNode(root1->val+root2->val);
    //         CreateTree(root->left,root1->left,root2->left);
    //         CreateTree(root->right,root1->right,root2->right);
    //     }
    // }
    void maketree(TreeNode*&root ,TreeNode* root1, TreeNode* root2)
    {
        if(root1==NULL && root2==NULL)
            root=NULL;
        else if(root1==NULL && root2!=NULL)
        {
            root= new TreeNode(root2->val);
            maketree(root->left,NULL,root2->left);
            maketree(root->right,NULL,root2->right);
            
        }
        else if(root1!=NULL && root2==NULL)
        {
            root= new TreeNode(root1->val);
            maketree(root->left,root1->left,NULL);
            maketree(root->right,root1->right,NULL);
        }
        else
        {
            root= new TreeNode(root2->val+root1->val);
            maketree(root->left,root1->left,root2->left);
            maketree(root->right,root1->right,root2->right);
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode*root;
        maketree(root,root1,root2);
        return root;
    }
};
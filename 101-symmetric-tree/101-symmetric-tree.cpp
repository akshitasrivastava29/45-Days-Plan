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
    bool isSymmetric(TreeNode* root) {
      TreeNode*t1;
       TreeNode*t2; 
        if(root==NULL)
            return true;
        queue<TreeNode*>q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty())
        {
             t1=q1.front();
            q1.pop();
             t2=q2.front();
            q2.pop();
            if(t1==NULL && t2==NULL)continue;
            if(t1==NULL || t2==NULL)return false;
            if(t1->val!=t2->val){
            return false;
            }
            q1.push(t1->left);
            q1.push(t1->right);
            q2.push(t2->right);
            q2.push(t2->left);
            
        }
        return true;
        
        
    }
};
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
   bool isLeaf(TreeNode* root)
   {
       if(root->left==NULL && root->right==NULL )
       {
           return true;
       }
       return false;
   }
    private:
    vector<vector<int>> getAllPaths(TreeNode* root,int targetSum)
    {
        queue<pair<TreeNode*,pair<int, vector<int>>>>q;
        vector<vector<int>>res;
        if(root==NULL)
        {
            return res;
        }
        q.push({root,{root->val,{root->val}}});
        while(!q.empty())
        {
            auto front=q.front();
            q.pop();
            TreeNode*newnode=front.first;
            int currsum=front.second.first;
            vector<int>currpath=front.second.second;
            if(isLeaf(newnode)&&currsum==targetSum)
            {
                res.push_back(currpath);
            }
            if(newnode->left)
            {
                vector<int>leftpath=currpath;
                leftpath.push_back(newnode->left->val);
                q.push({newnode->left,{currsum+newnode->left->val,leftpath}});
            }
            if(newnode->right)
            {
                vector<int>rightpath=currpath;
                rightpath.push_back(newnode->right->val);
                q.push({newnode->right,{currsum+newnode->right->val,rightpath}});
            }
            
        }
        return res;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        return  getAllPaths(root,targetSum);
        
    }
};
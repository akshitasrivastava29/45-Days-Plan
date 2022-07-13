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
    // int depth(TreeNode* root)
    // {
    //     if(root==NULL)return 0;
    //     return max(depth(root->right),depth(root->left))+1;
    // }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // vector<vector<int>>ans;
        // queue<TreeNode*>q;
        // if(root==NULL)
        // {
        //     return ans;
        // }
        // q.push(root);
        // while(!q.empty())
        // {
        //     int size=q.size();
        //     vector<int>level;
        //     for(int i=0;i<q.size();i++)
        //     {
        //         TreeNode*node=q.front();
        //         q.pop();
        //         if(node->left!=NULL)
        //         {
        //             q.push(node->left);
        //         }
        //         if(root->right!=NULL)
        //         {
        //             q.push(node->right);
        //         }
        //         level.push_back(node->val);
        //     }
        //     ans.push_back(level);
        // }
        // return ans;
        // ____________________________________
        // vector<vector<int>>ans;
        // queue<TreeNode*>q;
        // if(root==NULL)
        // {
        //     return ans;
        // }
        // q.push(root);
        // while(!q.empty())
        // {
        //     int size=q.size();
        //     vector<int>level;
        //     for(int i=0;i<size;i++)
        //     {
        //         TreeNode*node=q.front();
        //         q.pop();
        //         if(node->left)
        //         {
        //             q.push(node->left);
        //         }
        //         if(node->right)
        //         {
        //             q.push(node->right);
        //         }
        //         level.push_back(node->val);
        //     }
        //     ans.push_back(level);
        // }
        // return ans;
        // _______________________________
        //     vector<vector<int>>ans;
        //      queue<TreeNode*>q;
        //          if(root==NULL)
        //          {
        //              return ans;
        //          }
        // q.push(root);
        // while(!q.empty())
        // {
        //     int size=q.size();
        //     vector<int>level;
        //     for(int i=0;i<size;i++)
        //     {
        //         TreeNode*node=q.front();
        //         q.pop();
        //         if(node->left)
        //         {
        //             q.push(node->left);
        //         }
        //         if(node->right)
        //         {
        //             q.push(node->right);
        //         }
        //         level.push_back(node->val);
        //     }
        //     ans.push_back(level);
        // }
        // return ans;
        // ---------------------------------------
        // vector<vector<int>>ans;
        // queue<TreeNode*>q;
        // if(root==NULL){
        //     return ans;
        // }
        // q.push(root);
        // while(!q.empty())
        // {
        //     int size=q.size();
        //     vector<int>level;
        //     for(int i=0;i<size;i++)
        //     {
        //         TreeNode*node=q.front();
        //         q.pop();
        //         if(node->left)
        //         {
        //             q.push(node->left);
        //         }
        //         if(node->right)
        //         {
        //             q.push(node->right);
        //         }
        //         level.push_back(node->val);
        //     }
        //     ans.push_back(level);
        // }
        // return ans;
        // ----------------------------------
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return ans;
        }
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
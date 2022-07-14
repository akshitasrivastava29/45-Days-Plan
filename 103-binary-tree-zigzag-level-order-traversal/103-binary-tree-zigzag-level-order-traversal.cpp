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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>>v;
//         if(root==NULL)
//         {
//             return v;
//         }
//         queue<TreeNode* >q;
//         q.push(root);
//         bool LtoR=true;
//         while(!q.empty())
//         {
//             int n=q.size();
//             vector<int>level(n);
//             for(int i=0;i<n;i++)
//             {
//                 TreeNode* node=q.front();
//                 q.pop();
//                 // int ind=(LtoR)?i:(n-1-i);
//                 int ind=0;
//                 if(LtoR)
//                 {
//                     ind=i;
//                 }
//                 else
//                 {
//                     ind=n-1-i;
//                 }
//                 level[ind]=node->val;
//                 if(node->left)
//                 {
//                     q.push(node->left);
//                 }
//                 if(node->right)
//                 {
//                     q.push(node->right);
//                 }
//             }
//             LtoR=!LtoR;
//             v.push_back(level);

//         }
//         return v;
        // ---------------------
       //  vector<vector<int>>res;
       //  if(root==NULL)
       //  {
       //      return res;
       //  }
       //  queue<TreeNode*>q;
       //  q.push(root);
       //  bool leftright=true;
       //  while(!q.empty())
       //  {
       //      int size=q.size();
       //      vector<int>level(size);
       //      for(int i=0;i<size;i++)
       //      {
       //          TreeNode*node=q.front();
       //          q.pop();
       //          int ind;
       //          if(leftright)
       //              ind=i;
       //          else
       //              ind=size-1-i;
       //          level[ind]=node->val;
       //          if(node->left)
       //          {
       //              q.push(node->left);
       //          }
       //          if(node->right)
       //          {
       //              q.push(node->right);
       //          }
       //      }
       //      leftright=!leftright;
       //      res.push_back(level);
       //  }
       // return res; 
        // ---------------------------------
        if(!root)return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            if(flag)
            {
                ans.push_back(level);
                flag=false;
            }
            else
            {
                reverse(level.begin(),level.end());
                ans.push_back(level);
                flag=true;
            }
        }
        return ans;
    }
};
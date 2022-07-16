/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    // void visited(TreeNode*root,unordered_map<TreeNode*,TreeNode* >&parent,TreeNode* target)
    // {
    //     queue<TreeNode* >q;
    //     q.push(root);
    //     while(!q.empty())
    //     {
    //         TreeNode*curr=q.front();
    //         q.pop();
    //         if(curr->left)
    //         {
    //             parent[curr->left]=curr;
    //             q.push(curr->left);
    //         }
    //         if(curr->right){
    //         parent[curr->right]=curr;
    //         q.push(curr->right);
    //      }
    //     }
    // }
    void visited(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&par,TreeNode*target)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*curr=q.front();
            q.pop();
            if(curr->left)
            {
                par[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right)
            {
                par[curr->right]=curr;
                q.push(curr->right);
            }
        }
        
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         unordered_map<TreeNode* ,TreeNode* >parent;
//         visited(root,parent,target);
//         unordered_map<TreeNode* ,bool>visit;
//         queue<TreeNode*>q;
//         q.push(target);
//         visit[target]=true;
//         int currlevel=0;
//          while(!q.empty())
//          {
//              int size=q.size();
//              if(currlevel++==k)break;
//              for(int i=0;i<size;i++)
//              {
//                  TreeNode* curr=q.front();
//                  q.pop();
//                  if(curr->left && !visit[curr->left])
//                  {
//                     q.push(curr->left);
//                      visit[curr->left]=true;
//                  }
//                  if(curr->right && !visit[curr->right])
//                  {
//                      q.push(curr->right);
//                      visit[curr->right]=true;
//                  }
//                  if(parent[curr]&& !visit[parent[curr]])
//                     {
//                         q.push(parent[curr]);
//                      visit[parent[curr]]=true;
//                     }
                 
//              }
             
//          }
//         vector<int>v;
//         while(!q.empty())
//         {
//             TreeNode* node=q.front();
//             q.pop();
//             v.push_back(node->val);

//         }
//         return v;
        unordered_map<TreeNode*,TreeNode*>par;
        visited(root,par,target);
        unordered_map<TreeNode*,bool>visit;
        queue<TreeNode*>q;
        q.push(target);
        visit[target]=true;
        int currlevel=0;
        while(!q.empty())
        {
            int size=q.size();
            if(currlevel++==k)break;
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(node->left && !visit[node->left])
                {
                    q.push(node->left);
                    visit[node->left]=true;
                }
                if(node->right && !visit[node->right])
                {
                    q.push(node->right);
                    visit[node->right]=true;
                }
                if(par[node] && !visit[par[node]])
                {
                    q.push(par[node]);
                    visit[par[node]]=true;
                }
            }
        }
        vector<int>v;
        while(!q.empty())
        {
            TreeNode*temp=q.front();
            q.pop();
            v.push_back(temp->val);
        }
        
        return v;
        
    }
};
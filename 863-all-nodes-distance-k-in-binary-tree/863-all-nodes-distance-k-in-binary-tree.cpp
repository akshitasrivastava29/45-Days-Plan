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
        unordered_map<TreeNode*,bool>visit;
        unordered_map<TreeNode*,TreeNode*>par;
        visited(root,par,target);
        queue<TreeNode*>q;
        q.push(target);
        visit[target]=true;
        int level=0;
        while(!q.empty())
        {
            int size=q.size();
            if(level++==k) break;
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
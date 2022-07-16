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
    int widthOfBinaryTree(TreeNode* root) {
//         if(!root)
//         {
//             return 0;
//         }
//         long long ans=0;
//         queue<pair<TreeNode*,long long>>q;
//         q.push({root,0});
//         while(!q.empty())
//         {
//             long long size=q.size();
//             long long mini=q.front().second;
//             long long first,last;
//             for(int i=0;i<size;i++)
//             {
//                 long long curr=q.front().second-mini;
//                 TreeNode*node=q.front().first;
//                 q.pop();
//                 if(i==0)
//                     first=curr;
//                 if(i==size-1)
//                     last=curr;
//                 if(node->left)
//                 {
//                     q.push({node->left,curr*2+1});
//                 }
//                 if(node->right)
//                 {
//                     q.push({node->right,curr*2+2});
//                 }
//             }
            
//             ans=max(ans,(last-first)+1);

            
//         }
//         return ans;
        // ---------------------
        // if(!root)
        // {
        //     return 0;
        // }
        // long long ans=0;
        // queue<pair<TreeNode*,long long>>q;
        // q.push({root,0});
        // while(!q.empty())
        // {
        //    long long size=q.size();
        //     long long mmin=q.front().second;
        //     long long first,last;
        //     for(long long i=0;i<size;i++)
        //     {
        //        long long curr_id=q.front().second-mmin;
        //         TreeNode*node=q.front().first;
        //         q.pop();
        //         if(i==0)
        //         {
        //             first=curr_id;
        //         }
        //         if(i==size-1)
        //         {
        //             last=curr_id;
        //         }
        //         if(node->left)
        //             q.push({node->left,curr_id*2+1});
        //         if(node->right)
        //             q.push({node->right,curr_id*2+2});
        //     }
        //     ans=max(ans,last-first+1);
        // }
        // return ans;
        // -----------------------
        if(!root)
        {
            return 0;
        }
        long long ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            long long size=q.size();
            long long mini=q.front().second;
            long long first,last;
            for(long long i=0;i<size;i++)
            {
                long long currind=q.front().second-mini;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0)
                {
                    first=currind;
                }
                if(i==size-1)
                {
                    last=currind;
                }
                if(node->left)
                {
                    q.push({node->left,currind*2+1});
                }
                if(node->right)
                {
                    q.push({node->right,currind*2+2});
                }
            }
            ans=max(ans,last-first+1);
        }
        return ans;
        
    }
};
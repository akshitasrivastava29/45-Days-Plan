class Solution {
//     private:
//     bool check(vector<int>&arr,int i,vector<int>&vis)
//     {
//         int n=arr.size();
//         if(i>=n||i<0)
//         {
//             return false;
//          }
//         if(arr[i]==0)
//         {
//             return true;
//         }
//         if(vis[i]==1)
//         {
//             return false;
//         }
//         vis[i]=1;
//         int left=check(arr,i-arr[i],vis);
//         int right=check(arr,i+arr[i],vis);
        
//         return left||right;
//     }
    // ---------------------------
    bool dfs(vector<int>&arr,int ind,vector<bool>&vis)
    {
        int n=arr.size();
        if(ind>=n || ind<0)
        {
            return false;
        }
        if(arr[ind]==0)
        {
            return true;
        }
        if(vis[ind]==true)
        {
            return false;
        }
        vis[ind]=true;
        return dfs(arr,ind+arr[ind],vis)|| dfs(arr,ind-arr[ind],vis);
    }
public:
    bool canReach(vector<int>& arr, int start) {
//         int n=arr.size();
//         if(arr[start]==0)
//         {
//             return true;
//         }
//         queue<int>q;
//         q.push(start);
        
//         int vis[n];
//         memset(vis,false,sizeof vis);
//         vis[start]=true;
//         while(!q.empty())
//      {
//                     int i=q.front();
//                     q.pop();
// //             if(arr[i]==0)
// //             {

// //             return true;
// //             }
//             int left=i-arr[i];
//             if(left>=0&&vis[left]!=true)
//             {
//                 q.push(left);
//                 if(arr[left]==0)
//                     return true;
//                 vis[left]=true;
//             }
//             int right=i+arr[i];
//             if(right<n&&vis[right]!=true)
//             {
//                 q.push(right);
//                 if(arr[right]==0)
//                 return true;
//                 vis[right]=true;
//             }
//               }
//         return false;
        // ---------------------------
        // int n=arr.size();
        // vector<int>vis(n,0);
        // return  check(arr,start,vis);
        // ------------------
        int n=arr.size();
        vector<bool>vis(n,false);
        return dfs(arr,start,vis);
        
        
    }
};
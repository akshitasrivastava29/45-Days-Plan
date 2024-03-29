class Solution {
//     void dfs(int src,vector<int>adjl[],vector<int>&vis)
//     {
//         vis[src]=1;
//         for(auto it:adjl[src])
//         {
//             if(vis[it]!=1)
//             {
//                 dfs(it,adjl,vis);
//             }
            
//         }
    // }
    void dfs(int node,vector<int>adjL[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adjL[node])
        {
            if(vis[it]!=1)
            {
                dfs(it,adjL,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        // int n=isConnected.size();
        // vector<int>adjl[n];
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(isConnected[i][j]==1 && i!=j)
        //         {
        //             adjl[i].push_back(j);
        //             adjl[j].push_back(i);
        //         }
        //     }
        // }
        // vector<int>vis(n,0);
        // int cnt=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(vis[i]==0)
        //     {
        //         dfs(i,adjl,vis);
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        int n=isConnected.size();
        vector<int>adjL[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                }  
            }
        }
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adjL,vis);
                cnt++;
            }
        }
        return cnt;
        
    }
};
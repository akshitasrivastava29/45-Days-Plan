class Solution {
//     private:
//     bool dfsCycle(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
//     {
//             vis[node]=1;
//         pathvis[node]=1;
//         for(auto it:adj[node]){
//             if(vis[it]==0)
//             {
//                 if(dfsCycle(it,vis,pathvis,adj))
//                     return true;
//             }
//             else if(pathvis[it]==1)
//             {
//                 return true;
//             }
            
//         }
//         pathvis[node]=0;
//             return false;
//     }
//     private:
//     bool dfscycle(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
//     {
//         vis[node]=1;
//         pathvis[node]=1;
//         for(auto it:adj[node])
//         {
//             if(vis[it]==0)
//             {
//                 if(dfscycle(it,vis,pathvis,adj)==true)
//                 {
//                     return true;
//                 }
//             }
//             else if(pathvis[it]==1)
//             {
//                 return true;
//             }
//         }
//         pathvis[node]=0;
//         return false;
        
//     }
    private:
    // bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
    // {
    //     vis[node]=1;
    //     pathvis[node]=1;
    //     for(auto it:adj[node])
    //     {
    //         if(vis[it]==0)
    //         {
    //             if(dfs(it,vis,pathvis,adj))
    //             {
    //                 return true;
    //             }
    //         }
    //         else if(pathvis[it]==1)
    //             {
    //                return  true;
    //             }
    //     }
    //     pathvis[node]=0;
    //     return false;
    // }
    bool dfsCycle(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
    {
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(dfsCycle(it,vis,pathvis,adj))
                {
                    return true;
                }
            }
            else if(vis[it]==1 && pathvis[it]==1)
            {
                return true;
            }
        }
        pathvis[node]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // vector<int>vis(numCourses,0),pathvis(numCourses,0);
        // {
        //     vector<int>adj[numCourses];
        //     for(auto it:prerequisites)
        //     {
        //         adj[it[1]].push_back(it[0]);
        //     }
        //     for(int i=0;i<numCourses;i++)
        //     {
        //         if(!vis[i]){
        //             if(dfsCycle(i,vis,pathvis,adj))
        //             {
        //                 return false;
        //             }
        //         }
        //     }
        //     return true;
        // }
        // _________________---
        // vector<int>vis(numCourses,0),pathvis(numCourses,0);
        // vector<int>adj[numCourses];
        // for(auto it:prerequisites)
        // {
        //     adj[it[1]].push_back(it[0]);
        // }
        // for(int i=0;i<numCourses;i++)
        // {
        //     if(!vis[i])
        //     {
        //         if(dfscycle(i,vis,pathvis,adj))
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;
        // _________________________________
        // vector<int>vis(numCourses,0),pathvis(numCourses,0);
        // vector<int>adj[numCourses];
        //     for(auto it:prerequisites)
        //     {
        //         adj[it[1]].push_back(it[0]);
        //     }
        // for(int i=0;i<numCourses;i++)
        // {
        //     if(!vis[i])
        //     {
        //         if(dfs(i,vis,pathvis,adj)){
        //             return false;
        //         }
        //     }
        // }
        // return true;
        // -------------------
        vector<int>vis(numCourses,0),pathvis(numCourses,0);
        vector<int>adj[numCourses];
        for(auto &it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                if(dfsCycle(i,vis,pathvis,adj))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
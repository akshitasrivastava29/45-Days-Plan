class Solution {
    // private:
    // bool bipartitebfs(int src,vector<vector<int>>&graph,int color[])
    // {
    //     queue<int>q;
    //     q.push(src);
    //     color[src]=1;
    //     while(!q.empty())
    //     {
    //         int node=q.front();
    //         q.pop();
    //         for(auto it: graph[node])
    //         {
    //             if(color[it]==-1)
    //             {
    //                 color[it]=1-color[node];
    //                 q.push(it);
    //             }
    //             else if(color[it]==color[node])
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    // private:
    // bool checkbipartitiebfs(int src,vector<vector<int>>&graph,int color[])
    // {
    //     queue<int>q;
    //     q.push(src);
    //     color[src]=1;
    //     while(!q.empty())
    //     {
    //         int node=q.front();
    //          q.pop();
    //         for(auto it:graph[node])
    //         {
    //             if(color[it]==-1)
    //             {
    //                 color[it]=1-color[node];
    //                 q.push(it);
    //             }
    //             else if(color[it]==color[node])
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    private:
//     bool bipartitebfs(int st,vector<vector<int>>&graph,int color[])
//     {
//         queue<int>q;
//         q.push(st);
//         color[st]=1;
//         while(!q.empty())
//         {
//             int node=q.front();
//             q.pop();
//             for(auto it:graph[node])
//             {
//                if(color[it]==-1)
//                {
//                 color[it]=1-color[node];
//                 q.push(it);
//                }
//                 else if(color[it]==color[node])
//                 {
//                         return false;
//                 }
                    
//             }
//         }
//         return true;
//     }
    // ________________________________--
    bool checkbipartitiebfs(int src,vector<vector<int>>&graph,int color[])
    {
        queue<int>q;
        q.push(src);
        color[src]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])
                {
                    return false;
                }
            }
           
        }
         return true;
    }
    
public:
    bool isBipartite(vector<vector<int>>& graph) {
        // int n=graph.size();
        // int color[n];
        // memset(color,-1,sizeof color);
        // for(int i=0;i<n;i++)
        //     {
        //         if(color[i]==-1)
        //         {
        //             if(!bipartitebfs(i,graph,color))
        //             {
        //                 return false;
        //             }
        //         }
        //     }
        // return true;
        // ________________________---
        // int n=graph.size();
        // int color[n];
        // memset(color,-1,sizeof color);
        // for(int i=0;i<n;i++)
        // {
        //     if(color[i]==-1)
        //     {
        //         if(!bipartitebfs(i,graph,color))
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;
        // __________________________________--
        // int n=graph.size();
        // int color[n];
        // memset(color,-1,sizeof(color));
        // for(int i=0;i<n;i++)
        // {
        //     if(color[i]==-1)
        //     {
        //         if(!checkbipartitiebfs(i,graph,color))
        //         {
        //             return false;
        //         }
        //     }
        // }
        // return true;
        // ---------------
        int n=graph.size();
        int color[n];
        memset(color,-1,sizeof(color));
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(!checkbipartitiebfs(i,graph,color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
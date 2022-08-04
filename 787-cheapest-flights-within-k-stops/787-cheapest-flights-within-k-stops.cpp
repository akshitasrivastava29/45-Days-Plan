class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // vector<pair<int,int>>adj[n];
        // for(auto it:flights)
        // {
        //     int u=it[0];
        //     int v=it[1];
        //     int wt=it[2];
        //     adj[u].push_back({v,wt});
        // }
        // priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>minh;
        // minh.push({0,src,0});
        // vector<int>dist(n+1,INT_MAX);
        // while(!minh.empty())
        // {
        //     auto curr=minh.top();
        //     minh.pop();
        //     int cost=curr[0];
        //     int nodes=curr[1];
        //     int stops=curr[2];
        //     if(nodes==dst)
        //     {
        //         return cost;
        //     }
        //     if(stops>k)continue;
        //     if(dist[nodes]<stops)continue;
        //     dist[nodes]=stops;
        //     for(auto it:adj[nodes])
        //     {
        //         int nextnodes=it.first;
        //         int nextcost=it.second;
        //         minh.push({cost+nextcost,nextnodes,stops+1});
        //     }
        // }
        // return -1;
        // -----------------
        
        vector<pair<int,int>>adj[n];
        for(auto it:flights)
        {
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adj[u].push_back({v,wt});
        }
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>minh;
        minh.push({0,src,0});
        vector<int>dis(n+1,INT_MAX);
        while(!minh.empty())
        {
            auto curr=minh.top();
            minh.pop();
            int cost=curr[0];
            int nodes=curr[1];
            int stops=curr[2];
            if(nodes==dst)
            {
                return cost;
            }
            if(stops>k)continue;
            if(dis[nodes]<stops)continue;
            dis[nodes]=stops;
            for(auto it:adj[nodes])
            {
                int nextnode=it.first;
                int nextcost=it.second;
                minh.push({cost+nextcost,nextnode,stops+1});
            }
        }
        return -1;
    }
};
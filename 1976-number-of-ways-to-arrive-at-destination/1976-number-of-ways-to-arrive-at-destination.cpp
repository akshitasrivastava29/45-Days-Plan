class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
//         int mod=1e9+7;
//         vector<long long>ways(n,0);
//         long long maxi=1e18;
//         vector<long long>dist(n,maxi);
//         dist[0]=0;
//         ways[0]=1;
//         vector<pair<int,int>>adj[n];
//         {
//             for(auto it:roads)
//             {
//                 adj[it[0]].push_back({it[1],it[2]});
//                 adj[it[1]].push_back({it[0],it[2]});
//             }
//         }
//         priority_queue<pair<long long,long long>,vector<pair<long long ,long long>>,greater<pair<long long,long long>>>pq;
//         pq.push({0,0});
//         while(!pq.empty())
//         {
//             long long node=pq.top().second;
//             long long dis=pq.top().first;
//             pq.pop();
//             for(auto it:adj[node])
//             {
//                 long long wt=it.second;
//                 long long adjNode=it.first;
//                 if(wt+dis<dist[adjNode])
//                 {
//                     dist[adjNode]=wt+dis;
//                     ways[adjNode]=ways[node];
//                     pq.push({dist[adjNode],adjNode});
                    
//                 }
//                 else if(wt+dis==dist[adjNode])
//             {
//                 ways[adjNode]=(ways[adjNode]+ways[node])%mod;
//              }

//             }
            
//         }
//         return ways[n-1];
        // --------------------
        // int mod=1e9+7;
        // vector<long long>ways(n,0);
        // long long maxi=1e18;
        // vector<long long>dist(n,maxi);
        // dist[0]=0;
        // ways[0]=1;
        // vector<pair<int,int>>adj[n];
        // for(auto it:roads)
        // {
        //     adj[it[0]].push_back({it[1],it[2]});
        //     adj[it[1]].push_back({it[0],it[2]});
        // }
        // priority_queue<pair<long long,long long>,vector<pair<long long, long long>>,greater<pair<long long,long long>>>pq;
        // pq.push({0,0});
        // while(!pq.empty())
        // {
        //     long long dis=pq.top().first;
        //     long long node=pq.top().second;
        //     pq.pop();
        //     for(auto it:adj[node])
        //     {
        //         long long adjNode=it.first;
        //         long long wt=it.second;
        //         if(wt+dis<dist[adjNode])
        //         {
        //             dist[adjNode]=wt+dis;
        //             ways[adjNode]=ways[node];
        //             pq.push({dist[adjNode],adjNode});
        //         }
        //         else if(wt+dis==dist[adjNode])
        //         {
        //             ways[adjNode]=(ways[adjNode]+ways[node])%mod;
        //         }
        //     }
        // }
        // return ways[n-1];
        // -------------------
        int mod=1e9+7;
        vector<long long>ways(n,0);
        long long maxi=1e18;
        vector<long long>dist(n,maxi);
        dist[0]=0;
        ways[0]=1;
        vector<pair<int,int>>adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<long long,long long>,vector<pair<long long ,long long>>,greater<pair<long long,long long>>>pq;
        pq.push({0,0});
        while(!pq.empty())
        {
            long long dis=pq.top().first;
            long long node=pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                long long adjNode=it.first;
                long long wt=it.second;
                if(wt+dis<dist[adjNode])
                {
                    dist[adjNode]=wt+dis;
                    ways[adjNode]=ways[node];
                    pq.push({dist[adjNode],adjNode});
                }
                else if(wt+dis==dist[adjNode])
                {
                    ways[adjNode]=(ways[node]+ways[adjNode])%mod;
                }
            }
            
        }
        return ways[n-1];
    }
};
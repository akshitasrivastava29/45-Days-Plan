class Solution {
    // void dfs(int node,vector<vector<int>>&rooms,vector<int>&vis)
    // {
    //     vis[node]=1;
    //     for(auto it:rooms[node])
    //     {
    //         if(vis[it]==-1)
    //         {
    //             dfs(it,rooms,vis);
    //         }
    //     }
    // }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // int n=rooms.size();
        // vector<int>vis(n,-1);
        // dfs(0,rooms,vis);
        // for(int i=0;i<n;i++)
        // {
        //     if(vis[i]==-1)
        //     {
        //         return false;
        //     }
        // }
        // return true;
        
        
        int n=rooms.size();
        vector<int>vis(n,0);
        queue<int>q;
        vis[0]=1;
        q.push(0);
        while(q.size())
        {
            int node=q.front();
            q.pop();
            for(auto it:rooms[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++)
        {   
        
            if(!vis[i])
            
                return false;
        }
            
        
         return true;
      
        
    }
};
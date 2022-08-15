class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>>g(n,vector<int>());
        vector<vector<int>>rg(n,vector<int>());
        
        for(auto it:connections)
        {
            g[it[0]].push_back(it[1]);
            rg[it[1]].push_back(it[0]);
            
        }
        int cnt=0;
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int node=q.front();
            visited[node]=true;
            q.pop();
            for(auto i:rg[node])
            {
                if(!visited[i])
                {
                    q.push(i);
                }
            }
            for(auto i:g[node])
            {
                if(!visited[i])
                {
                    q.push(i);
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};
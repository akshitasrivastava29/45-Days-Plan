class Solution {
public:
    int minJumps(vector<int>& arr) {
//         int n=arr.size();
//         queue<pair<int,int>>q;
//         vector<int>vis(n,0);
//         q.push({0,0});
//         vis[0]=1;
//         map<int,vector<int>>mp;
//         for(int i=0;i<n;i++)
//         {
//             mp[arr[i]].push_back(i);
//         }
        
//         while(!q.empty())
//               {
            
//                 int ind=q.front().first;
//                 int steps=q.front().second;
//             if(ind==n-1)
//             {
//                 return steps;
//             }
//             q.pop();
//             if(ind-1>=0&&!vis[ind-1])
//             {
//                 q.push({ind-1,steps+1});
//                 vis[ind-1]=1;
//             }
//             if(ind+1<n&&!vis[ind+1])
//             {
//                 q.push({ind+1,steps+1});
//                 vis[ind+1]=1;
//             }
//             vector<int>v=mp[arr[ind]];
//             for(auto it:v)
//             {
//                 if(!vis[it])
//                 {
//                     q.push({it,steps+1});
//                     vis[it]=1;
//                 }
//             }
//             mp[arr[ind]].clear();
            
    
//         }
       
//         return 0;
        int n=arr.size();
        queue<pair<int,int>>q;
        vector<int>vis(n,0);
        q.push({0,0});
        vis[0]=1;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        while(!q.empty())
        {
            int ind=q.front().first;
            int steps=q.front().second;
            if(ind==n-1)
            {
                return steps;
            }
            q.pop();
            if(ind-1>=0 && !vis[ind-1])
            {
                q.push({ind-1,steps+1});
                vis[ind-1]=1;
            }
            if(ind+1<=n && !vis[ind+1])
            {
                q.push({ind+1,steps+1});
                vis[ind+1]=1;
            }
            vector<int>v=mp[arr[ind]];
            for(auto it :v)
            {
                q.push({it,steps+1});
                vis[it]=1;
            }
            mp[arr[ind]].clear();
        }
        
        return 0;
    }
};
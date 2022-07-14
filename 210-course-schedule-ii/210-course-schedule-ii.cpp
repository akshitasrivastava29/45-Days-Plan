class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // vector<int>adj[numCourses];
        // int n=numCourses;
        // vector<int>indegree(n,0);
        // queue<int>q;
        // for(auto it:prerequisites)
        // {
        //     adj[it[1]].push_back(it[0]);
        //     indegree[it[0]]++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(indegree[i]==0)
        //     {
        //         q.push(i);
        //     }
        // } 
        // vector<int>ans;
        // while(!q.empty())
        // {
        //     ans.push_back(q.front());
        //     int node=q.front();
        //     q.pop();
        //     for(auto it:adj[node])
        //         {
        //             indegree[it]--;
        //         if(indegree[it]==0)
        //         {
        //             q.push(it);
        //         }
        //         }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(indegree[i]!=0)
        //     {
        //         vector<int>dummy;
        //          return dummy;
        //     }
        // }
        // return ans;
        // _________________----
//         vector<int>adj[numCourses];
//         int n=numCourses;
//         vector<int>indegree(n,0);
//         queue<int>q;
//         for(auto it:prerequisites)
//         {
//             adj[it[1]].push_back(it[0]);
//             indegree[it[0]]++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(indegree[i]==0)
//             {
//                 q.push(i);
//             }
//         }
//         vector<int>ans;
//         while(!q.empty())
//         {
//             int node=q.front();
//             ans.push_back(node);
//             q.pop();
//             for(auto it: adj[node])
//             {
//                 indegree[it]--;
//                 if(indegree[it]==0)
//                 {
//                     q.push(it);
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(indegree[i]!=0)
//             {

//                 vector<int>dummy;
//                 return dummy;
                    
                
//             }
//         }
//         return ans;
        // ______________________________-----
//         
        // -----------------------
        vector<int>adj[numCourses];
        int n=numCourses;
        vector<int>indegree(n,0);
        queue<int>q;
        for(auto it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty())
        {

            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]!=0)
            {
                vector<int>dummy;
                return dummy;
            }
        }
        return ans;
    }
};
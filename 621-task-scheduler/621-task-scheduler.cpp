class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
//         if(n==0)
//         {
//             return tasks.size();
//         }
//         unordered_map<char,int>mp;
//         for(auto &ch:tasks)
//         {
//             mp[ch]++;
//         }
//         priority_queue<int>pq;
//         for(auto it:mp)
//         {
//             pq.push(it.second);
//         }
//         int cycles=0;
//         while(!pq.empty())
//         {
//            vector<int>temp;
//             for(int i=0;i<=n;i++)
//             {
//                 if(!pq.empty())
//                 {
//                     temp.push_back(pq.top());
//                     pq.pop();
//                 }
//             }
//             for(int i:temp)
//             {
//                 if(i)
//                 {
//                     pq.push(i);
//                 }
//             }
//             if(pq.empty()){
//             cycles+=temp.size();
//                 }
//             else
//             {
//                 cycles+=n+1;
//             }
            
//         }
        // return cycles;
         unordered_map<char,int> mp;
        for(auto x:tasks)
            mp[x]++;
        
        priority_queue<int> pq;
        for(auto x:mp)
            pq.push(x.second);
        
        int ans=0;
        while(!pq.empty())
        {
            vector<int> t;
            for(int i=0;i<=n && !pq.empty();i++)
            {
                t.push_back(pq.top());
                pq.pop();
            }
            for(auto x:t)
            {
                if(x-1>0)
                    pq.push(x-1);
            }
            
            ans += pq.empty()? t.size(): n+1;
        }
        return ans;
    }
};
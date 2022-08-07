class Solution {
public:
    typedef pair<int,int>pd;
    vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
//         vector<int>ans;
//         priority_queue<pd,vector<pd>,greater<pd>>pq;
//         for(int i=0;i<nums.size();i++)
//         {
//             mp[nums[i]]++;      
//          }
               
//         for(auto it=mp.begin();it!=mp.end();it++)
//                {
//                    int ele=it->first;
//                    int freq=it->second;
//                    pq.push({freq,ele});
//                    if(pq.size()>k)
//                    {
//                        pq.pop();
//                    }
//                }
//                while(!pq.empty())
//                {
//                    ans.push_back(pq.top().second);
//                    pq.pop();
//                }
//         return ans;
        // _________________________________
//         // vector<int> topKFrequent(vector<int>& nums, int k) {
//      priority_queue<pd,vector<pd>,greater<pd> >q;
//     unordered_map<int,int>m;
//  vector<int>v;
//     for(auto &v:nums){
//         m[v]++;
//     }
    
//     for(auto it=m.begin();it!=m.end();it++){
//         int ele=(*it).first;
//         int fr=(*it).second;
//         q.push({fr,ele});
//         if(q.size()>k)q.pop();
//     }
//     while(!q.empty()){
//       int a= (q.top()).second;
//         q.pop();
//        v.push_back(a); 
//     }
    
    
// return v;    
        // ______________________________________
//         unordered_map<int,int>mp;
//         priority_queue<pd,vector<pd>,greater<pd>>minhp;
//         vector<int>v;
//         for(auto&it:nums)
//         {
//             mp[it]++;
//         }
//         for(auto it=mp.begin();it!=mp.end();it++)
//         {
//             int ele=(*it).first;
//             int freq=(*it).second;
//             minhp.push({freq,ele});
//             if(minhp.size()>k)
//             {
//                 minhp.pop();
//             }
//         }
//         while(!minhp.empty()){
//             int a=minhp.top().second;
//             minhp.pop();
//             v.push_back(a);
            
//         }
//         return v;
    // }
    // unordered_map<int,int>mp;
    // priority_queue<pd,vector<pd>,greater<pd>>minh;
    // vector<int>v;
    // for(auto&it:nums)
    // {
    //         mp[it]++;
    // }
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     // int ele=(*it.first);
    //     //  int freq=(*it.second);
    //     int ele=it->first;
    //     int freq=it->second;
    //     minh.push({freq,ele});
    //     if(minh.size()>k)
    //     {
    //         minh.pop();
    //     }
    // }
    // while(minh.size()>0)
    // {
    //    int val=minh.top().second;
    //     v.push_back(val);
    //     minh.pop();
    // }
    // return v;
        // -------
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int ele=it->first;
            int freq=it->second;
            minh.push({freq,ele});
            while(minh.size()>k)
            {
                minh.pop();
            }
        }
        vector<int>ans;
        while(minh.size()>0)
        {
            int val=minh.top().second;
            minh.pop();
            ans.push_back(val);
        }
        return ans;
    }
};
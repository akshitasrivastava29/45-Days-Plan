class Solution {
    // private:
    // struct mycomp{
    //     bool operator()(const pair<int ,string>&a ,const pair<int,string>&b)
    //     {
    //         if(a.first!=b.first)
    //         {
    //             return a.first>b.first;
    //         }
    //         else
    //         {
    //             return b.second>a.second;
    //         }
    //     }
    // };
    private:
    struct comp{
        bool operator()(const pair<int,string>&a,const pair<int,string>&b)
        {
            if(a.first!=b.first)
            {
                return a.first>b.first;
            }
            else
            {
                return b.second>a.second;
            }
        }
    };
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
//         unordered_map<string,int>mp;
//         for(string &str:words)
//         {
//             mp[str]++;
//         }
        
//         priority_queue<pair<int ,string> ,vector<pair<int,string>>,mycomp>pq;
//         for(auto it=mp.begin();it!=mp.end();it++)
//         {
//         pq.push(make_pair(it->second,it->first));
//         if(pq.size()>k)
        
           
//         pq.pop();
    
//         }
//         vector<string>res;
//          while(!pq.empty())
//          {
//              res.insert(res.begin(),pq.top().second);
//              pq.pop();
//          }
//         return res;
        unordered_map<string,int>mp;
        for(string &str:words)
        {
            mp[str]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp>pq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push(make_pair(it->second,it->first));
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<string >ans;
        while(!pq.empty())
        {
            ans.insert(ans.begin(),pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
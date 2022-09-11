
class Solution {

public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>v;
        int mod=1e9+7;
        priority_queue<int ,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
           v.push_back({efficiency[i],speed[i]});
        }
        long sumspeed=0,ans=0;
        sort(v.begin(),v.end());
        for(auto i=n-1;i>=0;i--)
        {
            sumspeed+=v[i].second;
            pq.push(v[i].second);
            if(pq.size()>k)
            {
                sumspeed-=pq.top();
                pq.pop();
            }
            ans=max(ans,sumspeed*v[i].first);
        }
        return ans%mod;
        
    }
};
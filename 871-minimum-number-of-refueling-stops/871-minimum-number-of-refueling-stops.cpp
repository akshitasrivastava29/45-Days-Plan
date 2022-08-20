class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        priority_queue<int>pq;
        int curdis=startFuel;
        int i=0 , ans=0;
        while(curdis<target)
        {
            while(i<n && stations[i][0]<=curdis)
            {
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty())
            {
                return -1;
            }
            ans++;
            curdis+=pq.top();
            pq.pop();
        }
        return ans;
        
    }
};
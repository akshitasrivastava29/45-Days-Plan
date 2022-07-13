class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        priority_queue<pair<double,pair<int,int>>>maxh;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double frac=(double)arr[i]/arr[j];
                maxh.push({frac,{arr[i],arr[j]}});
                if(maxh.size()>k)
                {
                    maxh.pop();
                }
            }
        }
        vector<int>ans;
        ans.push_back(maxh.top().second.first);
        ans.push_back(maxh.top().second.second);
        return ans;
        
    }
};
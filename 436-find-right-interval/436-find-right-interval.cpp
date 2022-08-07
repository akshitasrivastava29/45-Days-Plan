class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        // int n=intervals.size();
        // vector<int> rightInterval(n);
        // vector<pair<int,int>> inter(n);
        // for(int i=0;i<n;i++) inter[i]={intervals[i][0],i};
        // sort(inter.begin(),inter.end());
        // int i=0;
        // for(auto it:intervals){
        //     int low=0,high=n-1;
        //     while(low<=high){
        //         int mid=(low+high)/2;
        //         if(inter[mid].first>=it[1]) high=mid-1;
        //         else low=mid+1;
        //     }
        //     if(low==n) rightInterval[i++]=-1;
        //     else rightInterval[i++]=inter[high+1].second;
        // }
        // return rightInterval;
        
        int n=intervals.size();
        vector<int>rightint(n);
        vector<pair<int,int>>intval(n);
        for(int i=0;i<n;i++)
        {
           intval[i]={intervals[i][0],i};
        }
        sort(intval.begin(),intval.end());
        int i=0;
        for(auto it:intervals)
        {
            int low=0,high=n-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(intval[mid].first>=it[1])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(low==n)
            {
                rightint[i++]=-1;
            }
            else 
            {
                rightint[i++]=intval[high+1].second;
            }
        }
        return rightint;
    }
};
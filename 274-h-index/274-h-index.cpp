class Solution {
    bool isvalid(vector<int>&citations,int mid )
    {
        int n=citations.size();
        
        int cnt=0;
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>=mid)
            {
                cnt++;
            }
        }
        if(cnt>=mid)
        {
            return true;
        }
        return false;
    }
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int maxi=citations[0];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,citations[i]);
        }
        int low=1,high=maxi,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(isvalid(citations,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
        
    }
};
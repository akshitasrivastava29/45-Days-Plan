class Solution {
    private:
    bool fun(vector<int>&position,int gap,int m )
    {
        int place=1;
        int prev=position[0];
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-prev>=gap)
            {
                place+=1;
                prev=position[i];
                if(place==m)return true;
            }
        }
        if(place<m) return false;
        return true;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=0,high=position[n-1],mid;
        int ans;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(fun(position,mid,m))
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
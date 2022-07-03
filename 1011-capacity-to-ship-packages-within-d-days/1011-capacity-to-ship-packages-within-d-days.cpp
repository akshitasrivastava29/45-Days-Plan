class Solution {
    private:
    // bool isPossible (vector<int>& weights,int maxallow,int days)
    // {
    //     int n=weights.size();
    //    int  Days=1;
    //     int loads=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(weights[i]>maxallow)
    //         {
    //             return false;
    //         }
    //         else
    //         {
    //             if(loads+weights[i]>maxallow)
    //             {
    //                 Days+=1;
    //                 loads=weights[i];
    //             }
    //             else
    //             {
    //                 loads+=weights[i];
    //             }
    //         }
    //     }
    //     if(Days>days)
    //     {
    //         return false;
    //     }
    //     return true;
    // }
    bool isdivide(vector<int>&weights,int maxallow,int days)
    {
        int div=1;
        int n=weights.size();
        int sumi=0;
        for(int i=0;i<n;i++)
        {
            if(weights[i]>maxallow)
            {
                return false;
            }
            else
            {
                if(sumi+weights[i]>maxallow)
                {
                    div+=1;
                    sumi=weights[i];
                }
                else
                {
                    sumi+=weights[i];
                }
            }
        }
        if(div>days)return false;
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // int n=weights.size();
        // int maxi=INT_MIN;
        // int ans;
        // for(int i=0;i<n;i++)
        // {
        //     maxi=max(maxi,weights[i]);
        // }
        // int low=maxi;
        // int summ=0;
        // for(int i=0;i<n;i++)
        // {
        //     summ+=weights[i];
        // }
        // int high=summ;
        // while(low<=high)
        // {
        //     int mid=(low+high)/2;
        //     if(isPossible(weights,mid,days)==true)
        //     {
        //         ans=mid;
        //         high=mid-1;
        //     }
        //     else
        //     {
        //         low=mid+1;
        //     }
        // }
        // return ans;
        int n=weights.size();
        int maxi=weights[0],sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }
        int low=maxi;
        int high=sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isdivide(weights,mid,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
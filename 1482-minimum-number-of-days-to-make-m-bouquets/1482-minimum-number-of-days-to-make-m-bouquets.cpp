class Solution {
    int getboq(vector<int>&bloomDay,int &k,long long day)
    {
        int n=bloomDay.size();
        long res=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=day)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(cnt==k)
            {
                res++,cnt=0;
            }
        }
        return res;
        
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        auto p=minmax_element(bloomDay.begin(),bloomDay.end());
        int l=*p.first;
        int h=*p.second;
        int mid;
        while(l<h)
        {
            mid=l+(h-l)/2;
            if(getboq(bloomDay,k,mid)<m)
            {
                l=mid+1;
            }
            else
            {
                h=mid;
            }
        }
        return  getboq(bloomDay,k,l)>=m?l:-1;
        
    }
};
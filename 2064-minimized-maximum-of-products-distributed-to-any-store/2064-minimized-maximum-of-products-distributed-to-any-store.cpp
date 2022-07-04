class Solution {
    private:
    int getstores(vector<int>& quantities,int store,int n)
    {
        int cnt=0;
        for(int i=0;i<quantities.size();i++)
        {
            cnt+=quantities[i]/store;
            if(quantities[i]%store!=0)
            {
                cnt++;
            }
        }
        return cnt;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int h=INT_MIN;
        int l=1;
        for(int i=0;i<quantities.size();i++)
        {
            h=max(h,quantities[i]);
        }
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int x=getstores(quantities,mid,n);
            {
               if(x<=n)
               {
                   h=mid-1;
               }
                else
                {
                    l=mid+1;
                }
            }
        }
        return l;
        
    }
};
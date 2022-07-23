class Solution {
    private:
    void merge(vector<int>&cntvec,vector<pair<int,int>>&v,int left,int mid,int right)
    {
        vector<pair<int,int>>temp(right-left+1);
        int i=left,j=mid+1,k=0;
        while(i<=mid && j<=right)
        {
            if(v[i].first<=v[j].first)
            {
                temp[k++]=v[j++];
            }
            else {
                cntvec[v[i].second]+=right-j+1;
                temp[k++]=v[i++];
            }
        }
        while(i<=mid)
        {
            temp[k++]=v[i++];
        }
        while(j<=right)
        {
            temp[k++]=v[j++];
        }
        for(int i=left;i<=right;i++)
        {
            v[i]=temp[i-left];
        }
    }
    //  void merge(vector<int>&cnt,vector<pair<int,int>>&v,int left,int mid,int right)
    // {
    //     vector<pair<int,int>>temp(right-left+1);
    //     int i=left,j=mid+1,k=0;
    //     while(i<=mid && j<=right)
    //     {
    //         if(v[i].first<=v[j].first)
    //         {
    //             temp[k++]=v[j++];
    //         }
    //         else
    //         {
    //             cnt[v[i].second]+=right-j+1;
    //             temp[k++]=v[i++];
    //         }
    //     }
    //     while(i<=mid)
    //     {
    //         temp[k++]=v[i++];
    //     }
    //     while(j<=right)
    //     {
    //         temp[k++]=v[j++];
    //     }
    //     for(int i=left;i<=right;i++)
    //     {
    //         v[i]=temp[i-left];
    //     }
    // }
    
    void mergesort(vector<int>&cntvec,vector<pair<int,int>>&v,int left,int right)
    {
        if(left<right)
        {
            int mid=left+(right-left)/2;
            mergesort(cntvec,v,left,mid);
            mergesort(cntvec,v,mid+1,right);
            merge(cntvec,v,left,mid,right);
        }
    }
  
    // void mergesort(vector<int>&cnt,vector<pair<int,int>>&v,int left,int right)
    // {
    //     while(left<right)
    //     {
    //         int mid=left+(right-left)/2;
    //         mergesort(cnt,v,left,mid);
    //         mergesort(cnt,v,mid+1,right);
    //         merge(cnt,v,left,mid,right);
    //     }
    // }
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            pair<int,int>p;
            p.first=nums[i];
            p.second=i;
            v[i]=p;
        }
        vector<int>cntvec(n,0);
        mergesort(cntvec,v,0,n-1);
        return cntvec;
        
        
        // ----
        // int n=nums.size();
        // vector<pair<int,int>>v(n);
        // for(int i=0;i<n;i++)
        // {
        //     pair<int,int>p;
        //     p.first=nums[i];
        //     p.second=i;
        //     v[i]=p;
        // }
        // vector<int>cnt(n,0);
        // mergesort(cnt,v,0,n-1);
        // return cnt;
        
    }
};
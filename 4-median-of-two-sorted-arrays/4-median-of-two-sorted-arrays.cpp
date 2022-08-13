class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(m<n)return findMedianSortedArrays(nums2,nums1);
        int l1,l2,r1,r2;
        int low=0,high=n;
        
        while(low<=high)
        {
            int c1=(low+high)/2;
            int c2=(n+m+1)/2-c1;
            if(c1==0)
            {
                l1=INT_MIN;
            }
            else
            {
                l1=nums1[c1-1];
            }
            if(c2==0)
            {
                l2=INT_MIN;
            }
            else
            {
                l2=nums2[c2-1];
            }
            if(c1==n)
            {
                r1=INT_MAX;
            }
            else
            {
                r1=nums1[c1];
            }
            if(c2==m)
            {
                r2=INT_MAX;
            }
            else
            {
                r2=nums2[c2];
            }
            if(l1<=r2 && l2<=r1)
            {
                if((n+m)%2==0)
                {
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else
                {
                    return max(l1,l2);
                }
            }
            else if(l1>r2)
            {
                high=c1-1;
            }
            else
            {
                low=c1+1;
            }
        }
        return 0.0;
        
        
    }
};
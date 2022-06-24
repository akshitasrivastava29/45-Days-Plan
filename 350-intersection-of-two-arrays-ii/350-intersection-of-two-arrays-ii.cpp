class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // int n=nums1.size();
        // int m=nums2.size();
        vector<int>v;
//         for(int i=0;i<nums1.size();i++)
//         {
        
//             int low=0,high=nums2.size()-1,mid;
//             while(low<=high)
//             {
//                 mid=low+(high-low)/2;
//                 if(nums2[mid]==nums1[i])
//                 {
//                 if(find(v.begin(),v.end(),nums2[mid])!=v.end())
//                 {
//                     break;
//                 }
//                     v.push_back(nums2[mid]);
//                     break;
                
//              }
//                 else if(nums2[mid]<nums1[i])
                
//                    low=mid+1;
                
//                 else
                
//                     high=mid-1;
                
//             }
          // ____________________ 
        //  int i=0,j=0;
        // while(i<n && j<m)
        // {
        //     if(nums1[i]<nums2[j])
        //     {
        //         i++;
        //     }
        //     else if(nums1[i]>nums2[j])
        //     {
        //         j++;
        //     }
        //     else
        //     {
        //         v.push_back(nums1[i]);
        //         i++;
        //         j++;
        //     }
        // }
        // return v;
        // __________________----
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return v;

        
    }
};
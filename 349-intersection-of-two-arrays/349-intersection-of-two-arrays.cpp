class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int>s1(nums1.begin(),nums1.end());
//         unordered_set<int>s2(nums2.begin(),nums2.end());
//         vector<int>v;
//         for(int i=0;i<nums1.size();i++)
//         {
//             s1.insert(nums1[i]);
//         }
//         for(int i=0;i<nums2.size();i++)
//         {
//             s2.insert(nums2[i]);
//         }
//         for(auto &it :s1)
//         {
//             if(s2.find(it)!=s2.end())
//             {
//                 v.push_back(it);
//             }
//         }
        
//         return v;
        // ____________________________---
        // sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         vector<int>v;
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

//          }
//         return v;
        // -___________________--
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // set<int>st;
        // int i=0;
        // int j=0;
        // int n=nums1.size();
        // int m=nums2.size();
        // while(i<n && j<m)
        // {
        //     if(nums1[i]<nums2[j])
        //        {
        //            i++;
        //        }
        //    else if(nums1[i]>nums2[j])
        //     {
        //         j++;
        //     }
        //     else
        //     {
        //         st.insert(nums1[i]);
        //         i++,j++;
        //     }
        // }
        // vector<int>v;
        // for(auto &it :st)
        // {
        //     v.push_back(it);
        // }
        // return v;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        for(auto &it:s1)
        {
            if(s2.find(it)!=s2.end())
            {
                v.push_back(it);
            }
        }
        return v;
    }
};
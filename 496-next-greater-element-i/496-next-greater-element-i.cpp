class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums1.size();
//         int m=nums2.size();
//         stack<int>st;
//         vector<int>res;
//         map<int,int>mp;
        
//         for(int i=m-1;i>=0;i--)
//         {
//             while(!st.empty()&&nums2[i]>=st.top())
//             {
//                 st.pop();
//             }
//             if(st.empty())
//             {
//                 mp.insert({nums2[i],-1});
//             }
//             else
//             {
//                 mp.insert({nums2[i],st.top()});
//             }
//             st.push(nums2[i]);
//         }
//         for(auto x:nums1)
//         {
//             res.push_back(mp[x]);
//         }
//     return res;
        
        // int m=nums2.size();
        // stack<int>st;
        // vector<int>ans;
        // unordered_map<int,int>mp;
        // for(int i=m-1;i>=0;i--)
        // {
        //     while(!st.empty() && st.top()<nums2[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty())
        //     {
        //         mp[nums2[i]]=-1;
        //     }
        //     else
        //     {
        //         mp[nums2[i]]=st.top();
        //     }
        //     st.push(nums2[i]);
        // }
        // for(auto it:nums1)
        // {
        //     ans.push_back(mp[it]);
        // }
        // return ans;
        int m=nums2.size();
        stack<int>st;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=m-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                mp[nums2[i]]=-1;
            }
            else
            {
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        // for(auto it:nums1)
        // {
        //     ans.push_back(mp[it]);
        // }
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
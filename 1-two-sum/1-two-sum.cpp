class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=sizeof(nums)/sizeof(nums[0]);
//         vector<int>ans;
//         unordered_map<int,int>mp;
        
//            for(int i=0;i<n;i++)
//             {
//                 int x=nums[i];   
//                 int z=target-x;
//                auto it =map.find(z);
//                if(it!=mp.end())
//                {
//                 return{it->second,i};
//                }
//                mp[nums]=i;
//             }
    
//         return ans;
//     }
        
//         vector<int>result;
//         for(auto it1=nums.begin();it1!=nums.end();it1++)
//         {
//            auto it2=find(it1+1,nums.end(),target-*it1);
//             if(it2!=nums.end())
//             {
//                 result.push_back(it1-nums.begin());
//                 result.push_back(it2-nums.begin());
//                 break;
//             }
//         }
//         return result;
        
        
//     } 
        // vector<int>ans;
        // unordered_map<int ,int>mp;
        // for(int i=0;i<n;i++)
        // {
        //     if(mp.find(target-nums[i])!=mp.end())
        //     {
        //         ans.push_back(mp[target-nums[i]]);
        //         ans.push_back(i);
        //         return ans;
        //     }
        //     mp[nums[i]]=i;
        // }
        // return ans;
        // ________________________________________
    //     vector<int>ans;
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(mp.find(target-nums[i])!=mp.end())
    //         {
    //             ans.push_back(mp[target-nums[i]]);
    //             ans.push_back(i);
    //             // return ans;
    //         }
    //         mp[nums[i]]=i;
    //     }
    //     return ans;
    // }
            // __________________----
//         vector<int>ans;
//         unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(mp.find(target-nums[i])!=mp.end())
//             {
//                 ans.push_back(mp[target-nums[i]]);
//                 ans.push_back(i);
//                 return ans;
//             }
//             mp[nums[i]]=i;
//         }
    
//         return {};
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
    
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        // unordered_set<int>hashset;
        // int currnum=0;
        //  int currstreak=0;
        // for(int num: nums)
        // {
        //     hashset.insert(num);
        // }
        // int longeststreak=0;
        // for(int num:nums)
        // {
        //     if(!hashset.count(num -1))
        //     {
        //         currnum=num;
        //         currstreak=1;
        //     }
        //     while(hashset.count(currnum+1))
        //     {
        //         currnum+=1;
        //         currstreak+=1;
        //     }
        //     longeststreak=max(longeststreak,currstreak);
        // }
        // return longeststreak;
        // ******************************8
//         sort(nums.begin(),nums.end());
    
//             int prev=nums[0],i ,cnt=1 ,ans=1;
//             for(int i=1;i<n;i++)
//             {
//                 if(nums[i]==prev+1)
//                 {
//                     cnt++;
//                 }
//                 else if(nums[i]!=prev)
//                 {
//                     cnt=1;
//                 }
//                 prev=nums[i];
//                 ans=max(ans,cnt);
//             }
        
//         return ans;
        // ************************8

        // unordered_set<int>s;
        // for(int num:nums)
        // {
        // s.insert(num);
        //  }
        // int longeststreak=0;
        // for(int num:nums)
        // {
        //     if(!s.count(num-1))
        //     {
        //         int currnum=num;
        //         int currstreak=1;
        //         while(s.count(currnum+1))
        //         {
        //             currnum+=1;
        //             currstreak+=1;
        //         }
        //         longeststreak=max(longeststreak,currstreak);
        //     }
        // }
        // return longeststreak;
        // ______________-------
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int x:nums)
        {
            if(s.find(x)==s.end())
            {
                continue;
            }
            int prev=x-1,next=x+1;
            while(s.find(prev)!=s.end())
            {
                prev--;
            }
            while(s.find(next)!=s.end())
            {
                next++;
            }
            ans=max(ans,next-prev-1);
            s.erase(x);
        }
        return ans;
        
    }
        
};
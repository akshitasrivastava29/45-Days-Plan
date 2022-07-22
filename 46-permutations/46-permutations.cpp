class Solution {
    private:
//     void fun(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[])
//     {
//         int n=nums.size();
//         if(ds.size()==n)
//         {
//             ans.push_back(ds);
//             return ;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(!freq[i])
//                {
//                    ds.push_back(nums[i]);
//                     freq[i]=1;
               
//             fun(ds,nums,ans,freq);
//             freq[i]=0;
//             ds.pop_back();
//             }
//         }
//     }
    // ---
    // void fun(vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums,int freq[])
    // {
    //     int n=nums.size();
    //     if(ds.size()==n)
    //     {
    //         ans.push_back(ds);
    //         return ;
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         if(!freq[i])
    //         {
    //             ds.push_back(nums[i]);
    //             freq[i]=1;
    //             fun(ds,ans,nums,freq);
    //             freq[i]=0;
    //             ds.pop_back();
    //         }
    //     }
    // }
    // --
    void getp(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int v[])
    {
        int n=nums.size();
        if(temp.size()==n)
        {
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                temp.push_back(nums[i]);
                v[i]=1;
                getp(nums,temp,ans,v);
                v[i]=0;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>>ans;
        // vector<int>ds;
        // int n=nums.size();
        // int freq[n];
        // for(int i=0;i<n;i++)
        // {
        //     freq[i]=0;
        // }
        // fun(ds,nums,ans,freq);
        // return ans;
        
        
        // int n=nums.size();
        // vector<vector<int>>ans;
        // vector<int>ds;
        // int freq[nums.size()];
        // for(int i=0;i<n;i++)
        // {
        //     freq[i]=0;
        // }
        // fun(ds,ans,nums,freq);
        // return ans;
        
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        int v[n];
        for(int i=0;i<n;i++)
        {
            v[i]=0;
        }
        getp(nums,temp,ans,v);
        return ans;
        
    }
};
class Solution {
    private:
//     void fun(int ind,vector<int>&nums,vector<int>temp,set<vector<int>>&res)
//     {
//         if(ind==nums.size())
//         {
//             sort(temp.begin(),temp.end());
//             res.insert(temp);
//             return;
//         }
//         temp.push_back(nums[ind]);
//         fun(ind+1,nums,temp,res);
//         temp.pop_back();
//         fun(ind+1,nums,temp,res);
        
//     }
    void getsubset(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        int n=nums.size();
        
            ans.push_back(temp);
        
        for(int i=ind;i<n;i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
            {
                continue;
            }
        temp.push_back(nums[i]);
        getsubset(i+1,nums,temp,ans);
        temp.pop_back();
        }
        
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       //  int n=nums.size();
       //  vector<int>temp;
       //  set<vector<int>>res;
       //  vector<vector<int>>ans;
       //  fun(0,nums,temp,res);
       //  // for(auto it=res.begin();it!=res.end();it++)
       //  for(auto it:res)
       //  {
       //      // ans.push_back(*it);
       //      ans.push_back(it);
       //  }
       // return ans; 
        
        // --------
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        getsubset(0,nums,temp,ans);
        return ans;
        
        
    }
};
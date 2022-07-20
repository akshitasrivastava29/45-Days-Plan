class Solution {
    private:
//     void fun(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&v)
//     {
//         int n=nums.size();
//         if(ind==n)
//         {
//             v.push_back(temp);
//             return ;
//         }
//         temp.push_back(nums[ind]);
//         fun(ind+1,nums,temp,v);
//         temp.pop_back();
//         fun(ind+1,nums,temp,v);
        
//     }
    void getsubsets(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        int n=nums.size();
        if(ind==n)
        {
            ans.push_back(temp);
            return ;
        }
        temp.push_back(nums[ind]);
        getsubsets(ind+1,nums,temp,ans);
        temp.pop_back();
        getsubsets(ind+1,nums,temp,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>temp;
        // vector<vector<int>>v;
        // fun(0,nums,temp,v);
        // return v;
        
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        getsubsets(0,nums,temp,ans);
        return ans;
        
        
    }
};
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
//         int n=nums.size();
//         int m=nums[0].size();
//         map<int,vector<int>>mp;
//         int maxi=nums[0].size();
//         for(int i=n-1;i>=0;i--)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 mp[i+j].push_back(nums[i][j]);
//             }
//         }
//         vector<int>res;
//         for(auto it:mp)
//         {
//             for(int j=0;j<it.second.size();j++)
//             {
//                 res.push_back(it.second[j]);
//             }
//         }
        
//        return res; 
        map<int,vector<int>>m;
        int maxi=nums[0].size();
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                m[i+j].push_back(nums[i][j]);
            }
        }
        vector<int>res;
        for(auto i:m){
            for(int j=0;j<i.second.size();j++){
                res.push_back(i.second[j]);
            }
        }
        return res;
    }
};
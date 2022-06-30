class Solution {
public:
    int minMoves2(vector<int>& nums) {
//         int n=nums.size();
//         int moves=0;
//         int mid=n/2;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++)
//         {
//             moves+=abs(nums[i]-nums[mid]);
//         }
//         return moves;
        int n=nums.size();
        int moves=0;
        int mid=n/2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            moves+=abs(nums[i]-nums[mid]);
        }
        return moves;
        
    }
};
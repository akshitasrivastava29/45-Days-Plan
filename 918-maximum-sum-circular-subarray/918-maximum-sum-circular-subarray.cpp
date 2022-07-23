class Solution {
    private:
    // int maxsubarray(vector<int>&nums)
    // {
    //     int n=nums.size();
    //     int maxi=nums[0];
    //     int sum=nums[0];
    //     for(int i=1;i<n;i++)
    //     {
    //         sum+=nums[i];
    //         maxi=max(maxi,sum);
    //         if(sum<0)
    //         {
    //             sum=0;
    //         }
    //     }
    //     return maxi;
    // }
    int MaxSubarray(vector<int> &nums)
{
    int maxEnding = nums[0];
    int res = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        maxEnding = max(nums[i], maxEnding + nums[i]);
        res = max(maxEnding, res);
    }
    return res;
}
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // int n =nums.size();
        // int normalsubarray=maxsubarray(nums);
        // if(normalsubarray<0)
        // {
        //     return normalsubarray;
        // }
        // int totsum=0;
        // for(int i=0;i<n;i++){
        //     totsum+=nums[i];
        //     nums[i]=-1*nums[i];
        // }
        // int maxcircular=totsum+maxsubarray(nums);
        // return max(normalsubarray,maxcircular);
        int n = nums.size();
    int normalSub = MaxSubarray(nums);
    //Max Subarray Sum in the linear fashion using
    //Kadane's Algorithm
    if (normalSub < 0)
        return normalSub;
    //All elements are negative
    int tot_sum = 0;
    for (int i = 0; i < n; i++)
    {
        tot_sum += nums[i];
        nums[i] = -1 * nums[i];
    //Inverting the element
    }
    int maxCircular = tot_sum + MaxSubarray(nums);
    //Max Circular Subarray which is the sum of total sum of all
    //elements of the array and Max Subarray Sum of the inverted elements
    //of the array.

    //We are inverting elements to find the non-contributing elements in
    //the normalSub and then sum them

    //By subtracting the non-contributing elements from total_sum we will get the 
    //Max Circular Subarray Sum
	
	//Our array is like a ring and we have to eliminate the maximum continuous negative 
	//that implies maximum continuous positive in the inverted arrays.
	
    return max(normalSub, maxCircular);
        
        
    }
};
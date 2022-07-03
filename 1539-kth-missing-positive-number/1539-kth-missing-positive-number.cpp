class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       // int low=0;
       //  int high=arr.size()-1;
       //  int mid;
       //  while(low<=high)
       //  {
       //      mid=low+(high-low)/2;
       //      if(arr[mid]-(1+mid)<k)
       //      {
       //          low=mid+1;
       //      }
       //      else
       //      {
       //          high=mid-1;
       //      }
       //  }
       //  return low+k;
        
        int n=arr.size();
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]-(1+mid)<k)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low+k;
        
    }
};
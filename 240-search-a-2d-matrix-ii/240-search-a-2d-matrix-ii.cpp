class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
//         if(!matrix.size())
    
//             return false;
//         int low=0,high=(n*m)-1,mid;
//         while(low<=high)
//         {
//             mid=low+(high-low)/2;
//             if(matrix[mid/m][mid%m]==target)
//             {
//                 return true;
//             }
//              if(matrix[mid/m][mid%m]<target)
//             {
//                 low=mid+1;
//             }
//             else
//             {
//                 high=mid-1;
//             }
//         }
//         return false;
        // int i=0,j=m-1;
        //     while(i<n && j>=0)
        //     {
        //         if(matrix[i][j]==target)
        //         {
        //             return true;
        //         }
        //         else if(matrix[i][j]>target)
        //         {
        //             j--;
        //         }
        //         else
        //         {
        //             i++;
        //         }
        //     }
        // return false; 
        
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>num(n,0);
        int ans=0,maxans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=0 && matrix[i][j]!=0)
                {
                    matrix[i][j]+=matrix[i-1][j];
                }
                num[j]=matrix[i][j];
            }
            vector<int>arr=num;
            sort(arr.begin(),arr.end());
            for(int k=0;k<arr.size();k++)
            {
                ans=max(ans,(n-k)*arr[k]);
            }
            maxans=max(ans,maxans);
        }
        return maxans;
        
    }
};
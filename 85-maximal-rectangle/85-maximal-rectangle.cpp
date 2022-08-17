class Solution {
    int maxarea(vector<int>&height)
    {
        int n=height.size();
        stack<int>st;
        int left[n],right[n];
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                left[i]=0;
            }
            else
            {
                left[i]=st.top()+1;
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && height[st.top()]>=height[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                right[i]=n-1;
            }
            else
            {
                right[i]=st.top()-1;
            }
            st.push(i);
        }
        int maxA=0;
        for(int i=0;i<n;i++)
        {
            maxA=max(maxA,(height[i]*(right[i]-left[i]+1)));
        }
        return maxA;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(matrix.empty())
        {
            return 0;
        }
        vector<int>height(n,0);
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='1')
                {
                    height[j]++;
                }
                else
                {
                    height[j]=0;
                }
            }
            res=max(res,maxarea(height));
        }
        return res;
    }
};
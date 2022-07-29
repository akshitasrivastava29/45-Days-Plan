class Solution {
    private:
    // int maxareahisto(vector<int>&height)
    // {
    //     height.push_back(0);
    //     int n=height.size();
    //     stack<int>st;
    //     int res=0;
    //     int i=0;
    //     while(i<n)
    //     {
    //        if(st.empty()||height[st.top()]<=height[i])
    //        {
    //            st.push(i);
    //            i++;
    //        }
    //         else
    //         {
    //             int top=st.top();
    //             st.pop();
    //             res=max(res,height[top]*(st.empty()?i:i-st.top()-1));
    //         }
    //     }
    //     return res;
    // }
    int maxareahisto(vector<int>&height)
    {
        // height.push_back(0);
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
//         int n =matrix.size();
//         if(n==0)return 0;
//         int m=matrix[].size();
//         vector<vector<int>>mat(n+1,vector<int>(m));
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 // mat[i][j]=matrix[i-1][j]=='1'?1:0;
//                 if(matrix[i][j]=='1'){
//                     return mat[i][j]=1;
//                 }
//                     else
//                     {
//                         return mat[i][j]=0;
//                     }
                
//             }
//             vector<vector<int>>dp(n+1,vector<int>(m));
//             int mx=0;
            
//             for(int i=1;i<=n;i++)
//                 {
//                     int leftbound=-1;
//                     stack<int>st;
//                      vector<int>left(m);
//                 for(int j=0;j<m;j++)
//                 {
//                    if( mat[i][j]==1)
//                    {
//                        mat[i][j]=1+mat[i-1][j];
//                        while(!st.empty() && mat[i][j])<=mat[i][st.top()]
//                        {
//                            st.pop();
//                            int val=leftbound;
//                            if(st!.empty())
//                               {
//                                   val=max(val,st.top());
//                                left[j]=val;
//                               }
//                        }
//                    }
//                     else
//                     {

//                     leftbound=j;
//                      left[j]=0;   
//                     }
//                     st.push(j);
//                 }
                
//                 while(!st.empty())
//                 {
//                     st.pop();
//                 }
                
//                 }
//         }
        // ___________________________________________
        int m=matrix.size();
        int n=matrix[0].size();
        if(matrix.empty())return 0;
        int res=0;
        vector<int>height(n,0);
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
            res=max(res,maxareahisto(height));
        }
        
        return res;
    }
};
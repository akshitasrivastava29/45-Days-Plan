class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         stack<int>st;
//         int leftsmall[n],rightsmall[n];
//         for(int i=0;i<n;i++)
//         {
//             while(!st.empty()&& heights[st.top()]>=heights[i])
//             {
//                 st.pop();
//             }
//                 if(st.empty())
//                 {
//                     leftsmall[i]=0;
//                 }
//                 else
//                 {
//                     leftsmall[i]=st.top()+1;
                    
//                 }
//             st.push(i);
//         }
//                 while(!st.empty())
//                 {
//                     st.pop();
//                 }
        
//         for(int i=n-1;i>=0;i--)
//         {
//             while(!st.empty()&& heights[st.top()]>=heights[i])
//                   {
//                       st.pop();
//                   }
//             if(st.empty())
//             {
//                 rightsmall[i]=n-1;
//             }
//             else
//             {
//                 rightsmall[i]=st.top()-1;
                
//             }
//             st.push(i);
//         }
//         while(!st.empty())
//         {
//             st.pop();
//         }
//         int maxA=0;
//         for(int i=0;i<n;i++)
//         {
//             maxA=max(maxA,heights[i]*(rightsmall[i]-leftsmall[i]+1));
//         }
//        return maxA;  
        // ----------------------
        // int n=heights.size();
        // stack<int>st;
        // int leftsmall[n],rightsmall[n];
        // for(int i=0;i<n;i++)
        // {
        //     while(!st.empty() && heights[st.top()]>=heights[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty())
        //     {
        //         leftsmall[i]=0;
        //     }
        //     else {
        //         leftsmall[i]=st.top()+1;
        //     }
        //     st.push(i);
        // }
        // while(!st.empty())
        // {
        //     st.pop();
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     while(!st.empty() && heights[st.top()]>=heights[i])
        //     {
        //         st.pop();
        //     }
        //     if(st.empty())
        //     {
        //         rightsmall[i]=n-1;
        //     }
        //     else
        //     {
        //         rightsmall[i]=st.top()-1;
        //     }
        //     st.push(i);
        // }
        //  while(!st.empty())
        // {
        //     st.pop();
        // }
        // int maxarea=0;
        // for(int i=0;i<heights.size();i++)
        // {
        //     maxarea=max(maxarea,heights[i]*(rightsmall[i]-leftsmall[i]+1));
        // }
        // return maxarea;
        
        int n=heights.size();
        stack<int>st;
        int left[n],right[n];
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
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
            while(!st.empty() && heights[st.top()]>=heights[i])
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
        while(!st.empty())
        {
            st.pop();
        }
        int maxA=0;
        for(int i=0;i<heights.size();i++)
        {
            maxA=max(maxA,heights[i]*(right[i]-left[i]+1));
        }
        return maxA;
    }
};
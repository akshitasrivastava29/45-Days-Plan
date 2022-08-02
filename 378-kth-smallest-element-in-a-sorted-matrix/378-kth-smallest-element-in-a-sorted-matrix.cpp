class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // priority_queue<int>pq;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         pq.push(matrix[i][j]);
        //     }
        //     while(pq.size()>k)
        // {
        //     pq.pop();
        // }
        // }
        // return pq.top();
        // ----------------------
        // int n=matrix.size();
        // int m=matrix[0].size();
        // priority_queue<int>maxh;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         maxh.push(matrix[i][j]);
        //     }
        // }
        // while(maxh.size()>k)
        // {
        //     maxh.pop();
        // }
        // return maxh.top();
        // -------------------
        
        int n=matrix.size();
        int m=matrix[0].size();
        priority_queue<int>maxh;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                maxh.push(matrix[i][j]);
            }
        }
        while(maxh.size()>k)
        {
            maxh.pop();
        }
        return maxh.top();
    }
};
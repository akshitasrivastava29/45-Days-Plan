class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& m, int k) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // vector<int>sum(n);
        // int res=INT_MIN;
        // for(int l=0;l<m;l++)
        // {
        //     vector<int>sums(m);
        //     for(int r=l;r<m;r++)
        //     {
        //         for(int i=0;i<n;i++)
        //         {
        //             sum[i]+=matrix[i][r];
        //         }
        //         set<int>s{0};
        //         int curr=0;
        //         for(int x:sum)
        //         {
        //             curr+=x;
        //             auto it=s.lower_bound(curr-k);
        //             if(it!=end(s))
        //             {
        //                 res=max(res,curr- *it);
        //             }
        //             s.insert(curr);
        //         }
        //     }
        // }
        // return res;
        int res = INT_MIN, rows = m.size(), cols = m[0].size();
    for (int l = 0; l < cols; ++l) {
        vector<int> sums(rows);
        for (int r = l; r < cols; ++r) {
            for (int i = 0; i < rows; ++i) 
                sums[i] += m[i][r];
            set<int> s = {0};
            int run_sum = 0;
            for (int sum : sums) {
                run_sum += sum;
                auto it = s.lower_bound(run_sum - k);
                if (it != end(s))
                    res = max(res, run_sum - *it);
                s.insert(run_sum);
            }
        }
    }
    return res;
        
    }
};
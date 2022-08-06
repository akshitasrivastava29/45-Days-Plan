class Solution {
public:
    vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> result;
        
//         for(int i=0;i<numRows;i++){
//             if(i == 0) result.push_back({1}); 
//             else if(i == 1) result.push_back({1,1});
//             else {
//                 vector<int> temp;
//                 for(int j=0;j<=i;j++){
//                     if(j == 0) temp.push_back(1);
//                     else if(j == i) temp.push_back(1);
//                     else {
//                         temp.push_back(result[i-1][j-1] + result[i-1][j]);
//                     }
//                 }
//                 result.push_back(temp);
//             }
//         }
        
//         return result;
        
        // vector<vector<int>>r(numRows);
        // for(int i=0;i<numRows;i++)
        // {
        //     r[i].resize(i+1);
        //     r[i][0]=r[i][i]=1;
        //     for(int j=1;j<i;j++)
        //     {
        //         r[i][j]=r[i-1][j-1]+r[i-1][j];
        //     }
        // }
        // return r;
        
        vector<vector<int>>r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1; //resize the first and last to 1
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
    }
};
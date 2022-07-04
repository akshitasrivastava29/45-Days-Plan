class Solution {
public:
    vector<int > spiralOrder(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int top=0,down=m-1,left=0,right=n-1;
//         int dir=0;
//         vector<int>v;
//         while(left<=right && top<=down)
//         {
//             if(dir==0)
//             {
//                 for(int i=left;i<=right;i++)
                
//                     v.push_back(matrix[top][i]);
//                     top++;
                
//             }
//            else if(dir==1)
//             {
//                 for(int i=top;i<=down;i++)
                
//                     v.push_back(matrix[i][right]);
//                     right--;
                
//             }
//            else if(dir==2)
//             {
//                 for(int i=right;i>=left;i--)
                
//                     v.push_back(matrix[down][i]);
//                     down--;
                
//             }
//             else
//             {
//                  for(int i=down;i>=top;i--)
                 
//                      v.push_back(matrix[i][left]);
//                      left++;
                 
//             }
//             dir=(dir+1)%4;
//         }
//         return v;
        // ______________________
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int top=0,down=n-1,left=0,right=m-1;
        // int dir=0;
        // vector<int>v;
        // while(left<=right && top<=down)
        // {
        //     if(dir==0)
        //     {
        //         for(int i=left;i<=right;i++)
        //         {
        //             v.push_back(matrix[top][i]);
        //         }
        //         top++;
        //     }
        //     if(dir==1)
        //     {
        //         for(int i=top;i<=down;i++)
        //         {
        //             v.push_back(matrix[i][right]);
        //         }
        //         right--;
        //     }
        //     if(dir==2)
        //     {
        //         for(int i=right;i>=left;i--)
        //         {
        //             v.push_back(matrix[down][i]);
        //         }
        //         down--;
        //     }
        //     if(dir==3)
        //     {
        //         for(int i=down;i>=top;i--)
        //         {
        //             v.push_back(matrix[i][left]);
        //         }
        //         left++;
        //     }
        //     dir=(dir+1)%4;
        // }
        // return  v;
        // _______________________-
        // int n=matrix.size();
        // int m=matrix[0].size();
        // vector<int>v;
        // int top=0,down=n-1,left=0,right=m-1;
        // int dir=0;
        // while(left<=right&& top<=down)
        // {
        //     if(dir==0)
        //     {
        //         for(int i=left;i<=right;i++)
        //         {
        //             v.push_back(matrix[top][i]);
        //         }
        //          top++;
        //     }
        //     if(dir==2)
        //     {
        //         for(int i=top;i<=down;i++)
        //         {
        //             v.push_back(matrix[i][right]);
        //         }
        //         right--;
        //     }
        //     if(dir==2)
        //     {
        //         for(int i=right;i>=left;i--)
        //         {
        //             v.push_back(matrix[down][i]);
        //         }
        //         down--;
        //     }
        //     if(dir==3)
        //     {
        //         for(int i=down;i>=top;i--)
        //         {
        //             v.push_back(matrix[i][left]);
        //         }
        //         left++;
        //     }
        //     dir=(dir+1)%4;
        // }
        // return v;
        // _________________________----
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,left=0,down=n-1,right=m-1;
        int dir=0;
        vector<int>ans;
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return ans;
        
    }
};
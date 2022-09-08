class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n);
       
        int top=0,down=n-1,left=0,right=n-1;
        int dir,ind=1;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
               v[i].push_back(1);
           } 
        }
        while(left<=right && top<=down)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v[top][i]=ind;
                    ind++;
                }
                top++;
            }
            if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v[i][right]=ind;
                    ind++;
                }
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v[down][i]=ind;
                    ind++;
                }
                down--;
            }
            if(dir==3)
            {
                for(int i=down;i>=top;i--)
                {
                    v[i][left]=ind;
                    ind++;
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return v;
        
    }
};
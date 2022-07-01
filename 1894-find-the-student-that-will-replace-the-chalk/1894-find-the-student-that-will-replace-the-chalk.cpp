class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        int i,j,l;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=chalk[i];
        }
        int p=k%sum;
        if(p==0)return 0;
        for(int i=0;i<n;i++)
        {
            if(p>=chalk[i])
            {
                p-=chalk[i];
            }
            else
            {
                return i;
            }
        }
        return n-1;
        
    }
};
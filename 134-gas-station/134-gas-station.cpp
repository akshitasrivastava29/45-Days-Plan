class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0;
        int st=0;
        for(int i=0;i<gas.size();i++)
        {
            sum1+=gas[i];
        }
        for(int i=0;i<cost.size();i++)
        {
            sum2+=cost[i];
        }
        if(sum1<sum2)return  -1;
        int curfuel=0;
        for(int i=0;i<gas.size();i++)
        {
            curfuel+=gas[i]-cost[i];
            if(curfuel<0)
            {
                st=1+i;
                curfuel=0;
            }
        }
        return st;
        
    }
};
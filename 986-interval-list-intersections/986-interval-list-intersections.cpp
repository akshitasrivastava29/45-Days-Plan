class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n=firstList.size();
        int m=secondList.size();
        int p1=0,p2=0;
        vector<vector<int>>res;
        vector<int>temp(2);
        while(p1<n && p2<m)
        {
            if(firstList[p1][1]>=secondList[p2][0] && firstList[p1][0]<=secondList[p2][1])
            {
                temp[0]=max(firstList[p1][0],secondList[p2][0]);
                temp[1]=min(firstList[p1][1],secondList[p2][1]);
                res.push_back(temp);
            }
            if(firstList[p1][1]>secondList[p2][1])
            {
                p2+=1;
            }
            else
            {
                p1+=1;
            }
        }
        return res;
        
        
    }
};
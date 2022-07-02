class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        int mod=1e9+7;
        long long int ans;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int maxi1=INT_MIN,maxi2=INT_MIN;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            // maxi1=max(maxi1,(horizontalCuts[i]-horizontalCuts[i-1]));
            if(maxi1<horizontalCuts[i]-horizontalCuts[i-1]){
                maxi1=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            // maxi2=min(maxi2,(verticalCuts[j]-verticalCuts[j-1]));
            if(maxi2<verticalCuts[i]-verticalCuts[i-1]){
                maxi2=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        
       return (maxi1*maxi2)%1000000007;
        
    }
};
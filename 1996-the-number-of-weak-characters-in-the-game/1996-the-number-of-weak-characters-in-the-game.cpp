class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),comp);
        int ans=0,maxdef=INT_MIN;
        int n=properties.size();
        for(int i=n-1;i>=0;i--)
        {
            if(properties[i][1]<maxdef)
            {
                ans++;
            }
            if(properties[i][1]>maxdef)
            {
                maxdef=properties[i][1];
            }
        }
        return ans;
        
    }
};
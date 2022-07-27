class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int maxi=0;
//         int mini=INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             mini=min(mini,prices[i]);
//             maxi=max(maxi,prices[i]-mini);
//         }
        
//         return maxi;
        // _____________________---
        // int n=prices.size();
        // int maxi=0;
        // int mini=INT_MAX;
        // for(int i=0;i<n;i++)
        // {
        //     mini=min(mini,prices[i]);
        //     maxi=max(maxi,prices[i]-mini);
        // }
        // return maxi;
        // _________________________-
        // int n=prices.size();
        // int mini=1e9;
        // int maxi=0;
        // for(int i=0;i<n;i++)
        // {
        //     mini=min(mini,prices[i]);
        //     maxi=max(maxi,prices[i]-mini);
        // }
        // return maxi;
        // __________________________--
        // int n=prices.size();
        // int maxi=0,mini=1e9;
        // for(int i=0;i<n;i++)
        // {
        //     mini=min(mini,prices[i]);
        //     maxi=max(maxi,prices[i]-mini);
        // }
        // return maxi;
        // --------------
        int n=prices.size();
        int mini=1e9,maxi=0;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};
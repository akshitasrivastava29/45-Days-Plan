class Solution {
    // int solve(int i,int n,vector<int>&f,vector<string>&arr)
    // {
    //     if(i==n)
    // {
    //     return 0;
    // }
    //     int nottake=solve(i+1,n,f,arr);
    //     int take=0;
    //     vector<int>temp=f;
    //     for(auto &t:arr[i])
    //     {
    //         if(temp[t-'a']++>1) return solve(i+1,n,f,arr);
    //     }
    //     take=arr[i].size()+solve(i+1,n,temp,arr);
    //     return max(take ,nottake);
    // }
    int solve(int i,int n,vector<int> &f,vector<string>&a){
        if(i==n) { return 0;}
        int notTake=solve(i+1,n,f,a);
        int take=0;
        vector<int> temp=f;
        for(auto &t:a[i]){
            if(++temp[t-'a']>1) return solve(i+1,n,f,a); 
        }
        take=a[i].size()+solve(i+1,n,temp,a);
        return max(notTake,take);
    }
public:
    int maxLength(vector<string>& arr) {
       //  int n=arr.size();
       //  vector<int>f(26,0);
       //  int i=0;
       // return  solve(i,n,f,arr);
        
        int ans=0;
        vector<int> f(26,0);
        int i=0,n=arr.size();
        return solve(i,n,f,arr);
        
    }
};
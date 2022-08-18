class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]+=1;
        }
        multiset<int,greater<int>>s;
        for(auto  i:mp)
        {
            s.insert(i.second);
        }
        int cnt=0;
        int ans=0;
        for(auto it=s.begin();cnt*2<n;it++)
        {
            ans++;
            cnt+=*it;
        }
       return ans; 
    }
};
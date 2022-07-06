class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
        s.insert(arr[i]);
        }
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a=arr[i];
                int b=arr[j];
                int c=a+b;
                cnt=2;
                while(s.find(c)!=s.end())
                {
                    cnt++;
                    a=b;
                    b=c;
                    c=a+b;
                }
                maxi=max(maxi,cnt);
                
            }
        }
        if(maxi>2)
        {
            return maxi;
        }
        return 0;
        
        
    }
};
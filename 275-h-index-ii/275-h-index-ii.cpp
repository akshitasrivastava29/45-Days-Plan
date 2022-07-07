class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int i=0;
        while(i<n && n-i>citations[i] )
        {
            i++;
        }
        return n-i;
        
    }
};
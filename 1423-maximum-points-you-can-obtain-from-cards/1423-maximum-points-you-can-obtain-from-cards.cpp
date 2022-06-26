class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
//         int n=cardPoints.size();
//         int left=0,right=n-k,tempsum=0,total=0;
//         total=accumulate(cardPoints.begin(),cardPoints.end(),total);
//         for(int i=left;i<right;i++)
//         {
//             tempsum+=cardPoints[i];
//         }
//         int res=total-tempsum;
//         while(right<n)
//         {
//             tempsum-=cardPoints[left++];
//             tempsum+=cardPoints[right++];
//             res=max(res,total-tempsum);
//         }
            
//           return res; 
        int n=cardPoints.size();
        int left=0,high=n-k;
        int tempsum=0,total=0;
        for(int i=0;i<n;i++)
        {
            total+=cardPoints[i];
        }
        for(int i=left;i<high;i++)
        {
            tempsum+=cardPoints[i];
        }
        int res=total-tempsum;
        while(high<n)
        {
            tempsum-=cardPoints[left++];
            tempsum+=cardPoints[high++];
            res=max(res,total-tempsum);
        }
        return res;
    }
};
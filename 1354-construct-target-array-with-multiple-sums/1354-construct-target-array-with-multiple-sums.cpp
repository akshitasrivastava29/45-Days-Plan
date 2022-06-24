class Solution {
public:
    bool isPossible(vector<int>& target) {
        long totsum=0;
        priority_queue<int>maxh;
        for(auto x:target)
        {
            totsum+=x;
            maxh.push(x);
        }
        // for(int i=0;i<target.size();i++)
        // {
        //     totsum+=target[i];
        //     maxh.push(target[i]);
        // }
        while(maxh.top()!=1)
        {
            int maxone=maxh.top();
            maxh.pop();
            totsum=totsum-maxone;
            if(totsum<=0 || totsum>=maxone)
            {
                return false;
            }
            maxone=maxone%totsum;
            maxh.push(maxone?maxone:totsum);
            // if(maxone)
            // {
            // maxh.push(maxone);
            // }
            // else
            // {
            //     maxh.push(totsum);
            // }
            totsum=totsum+maxone;
        }
        return true;
        
    }
};
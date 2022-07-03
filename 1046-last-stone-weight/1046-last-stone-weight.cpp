class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       
//         while(stones.size()>1){
//         sort(stones.begin(),stones.end());
//          int x=stones[stones.size()-1];
//             stones.pop_back();
//             int y=stones[stones.size()-1];
//             stones.pop_back();
//             int diff=x-y;
           
//             stones.push_back(diff);
            
//         }
//         return stones[0];
        // __________
//         priority_queue<int>pq(stones.begin(),stones.end());
//         while(pq.size()>1)
//         {
//             int y=pq.top();
//             pq.pop();
//             int x=pq.top();
//             pq.pop();
//             int diff=y-x;
//             if(x!=y)
//            pq.push(diff);
//         }
//         if(pq.empty())
//         {
//             return 0;
//         }
//         else
        
//            return  pq.top();
        // ________________-----
        int n=stones.size();
        
        priority_queue<int>maxh(stones.begin(),stones.end());
       
        while(maxh.size()>1)
        {
           int y=maxh.top();
           maxh.pop();
            int x=maxh.top();
           maxh.pop();
           int diff=y-x;
           if(x!=y)
           {
               maxh.push(diff);
           }
          
       }
        if(maxh.size()==0)return 0;
        return maxh.top();
        
    }
};
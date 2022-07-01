class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int n=arr.size();
//         priority_queue<pair<int,int>>pq;
//         vector<int>v;
//         for(int i=0;i<n;i++)
//         {
//             pq.push({abs(x-arr[i]),arr[i]});
//            while(pq.size()>k)
//             {
//                 pq.pop();
//             }
//         }
//         while(!pq.empty())
//         {
//             v.push_back(pq.top() .second);
//             pq.pop();
            
//         }
//        sort(v.begin(), v.end());
//         return v;
        
        // int n=arr.size();
        // vector<int>ans;
        // priority_queue<pair<int,int>>maxh;
        // for(int i=0;i<n;i++)
        // {
        //    maxh.push({abs(arr[i]-x),arr[i]});
        //     while(maxh.size()>k)
        //     {
        //         maxh.pop();
        //     }
        // }
        // while(maxh.size()>0)
        // {
        //     ans.push_back(maxh.top().second);
        //     maxh.pop();
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        
        int n=arr.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push({abs(x-arr[i]),arr[i]});
            while(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
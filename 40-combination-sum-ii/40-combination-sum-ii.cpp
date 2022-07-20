class Solution {
    private:
//     void fun(int ind,int target,vector<int>&arr,vector<int>&s,vector<vector<int>>&ans)
//     {
//         int n=arr.size();
//         if(target==0)
//         {
//             ans.push_back(s);
//             return;
//         }
// //         if(i>=n)
// //             return ;
// //         for(int i=0;i<n;i++)
// //         {
// //             if(arr[i]>target)
// //             {
// //                 break;
// //             }
            
// //             s.push_back(arr[i]);
// //             fun(i+1,target-arr[i],s,arr,ans);
// //             s.pop_back();
// //         }
//         for(int i=ind;i<arr.size();i++)
//         {
//             if(i>ind && arr[i]==arr[i-1] )
//                 continue;
//             if(arr[i]>target)
//                 break; 
//             s.push_back(arr[i]);
//             fun(i+1,target-arr[i],arr,s,ans);
//             s.pop_back();
//         }
//     }
    void getcombo(int ind,vector<int>&candidates,vector<int>&ds,vector<vector<int>>&ans,int target)
    {
        int n=candidates.size();
            if(target==0)
            {
                ans.push_back(ds);
                return ;
            }
        
        for(int i=ind;i<n;i++)
        {
            if(i>ind && candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(candidates[i]>target)
            {
                break;
            }
            ds.push_back(candidates[i]);
            getcombo(i+1,candidates,ds,ans,target-candidates[i]);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // sort(candidates.begin(),candidates.end());
        // vector<vector<int>>ans;
        // vector<int>s;
        // fun(0,target,candidates,s,ans);
        // return ans;
        // ----------
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        getcombo(0,candidates,ds,ans,target);
        return ans;
    }
};
//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    private:
    bool ispos(int A[],int N,int M,int maxp)
    {
        int s=1;
        int pages=0;
        for(int i=0;i<N;i++)
        {
            if(pages+A[i]<=maxp)
            {
                pages+=A[i];
            }
            else
            {
                s+=1;
                pages=A[i];
            }
        }
        if(s<=M)
        {
            return true;
        }
        return false;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        int ans;
        int maxi=0;
        int tot;
        for(int i=0;i<N;i++)
        {
            maxi=max(maxi,A[i]);
            tot+=A[i];
        }
        int low=maxi;
        int high=tot;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(ispos(A,N,M,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
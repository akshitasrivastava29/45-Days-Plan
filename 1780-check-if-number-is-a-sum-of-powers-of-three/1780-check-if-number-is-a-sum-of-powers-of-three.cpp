class Solution {
public:
    bool checkPowersOfThree(int n) {
        stack<int>st;
        int x=1;
        while(x<=n)
        {
            st.push(x);
            x*=3;
        }
        int sum=0;
        while(st.size())
        {
            if(sum+st.top()<=n)
            {
            sum+=st.top();
            }
            st.pop();
        }
       return sum==n; 
        
    }
};
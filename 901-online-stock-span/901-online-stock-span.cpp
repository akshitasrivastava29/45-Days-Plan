class StockSpanner {
public:
    stack<pair<int,int>>st;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
         i++;
        while(!st.empty() && st.top().second<=price)
        {
            st.pop();
        }
        if(st.empty())
        {
            st.push({i,price});
            return i;
        }
        
            pair<int,int>temp;
            temp=st.top();
            st.push({i,price});
            return i-temp.first;
        
       
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
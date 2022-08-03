class MyCalendar {
public:
    set<pair<int ,int>>booking;
    MyCalendar() {
        
        
    }
    
    bool book(int start, int end) {
        if(booking.empty())
        {
            booking.insert({start,end-1});
            return true;
        }
        auto it=booking.lower_bound({end,-1});
        if(it==booking.begin())
        {
            booking.insert({start,end-1});
            return true;
        }
        else
        {
            it--;
            if((*it).second<start)
            {
                booking.insert({start,end-1});
                return true;
            }
            else
                return false;
        }
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
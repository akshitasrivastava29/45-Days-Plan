class TimeMap {
public:
    unordered_map<string,set<int>>mp1;
    unordered_map<int,string>mp2;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp1[key].insert(timestamp);
        mp2[timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        if(mp1.find(key)!=mp1.end()){
            auto it=mp1[key].upper_bound(timestamp);
            if(it==mp1[key].begin()) return "";
            int left = *--it; //previous smaller element 
            return mp2[left];
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
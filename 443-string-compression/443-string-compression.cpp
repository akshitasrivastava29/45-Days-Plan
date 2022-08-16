class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,ansidx=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            int count=j-i;
            chars[ansidx]=chars[i];
            ansidx++;
            if(count>1)
            {
                string cnt=to_string(count);
                for(char ch:cnt)
                {
                     chars[ansidx]=ch;
                    ansidx++;
                }
               
            }
            i=j;
        }
        return ansidx;
        
    }
};
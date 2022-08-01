class Solution {
public:
    int compress(vector<char>& chars) {
//         int i=0;
//         int n=chars.size();
//         int k=0;
//         while(i<n)
//         {
//             int j=i;
//             while(j<n && chars[i]==chars[j])
//             {
//                 j++;
//             }
//             chars[k++]=chars[i];
//             if(j-i>1)
//             {
//                 for(char c:to_string(j-i))
//                 {
//                     chars[k++]=c;
//                 }
//             }
            
//             i=j;
        
//         }
        
//         return k;
         
        int n=chars.size();
        int i=0;
        int ansidx=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            chars[ansidx++]=chars[i];
            int count=j-i;
            if(count>1)
            {
                string cnt=to_string(count);
                for(char ch:cnt)
                {
                    chars[ansidx++]=ch;
                }
            }
            i=j;
        }
        return ansidx;
        
    }
};
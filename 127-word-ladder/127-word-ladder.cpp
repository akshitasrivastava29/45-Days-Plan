class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st;
        bool visited=false;
        for(auto x:wordList)
        {
          if(endWord.compare(x)==0)
          {
              visited=true;
          }
            st.insert(x);
        }
        if(visited==false)
        {
            return 0;
        }
        queue<string>q;
        q.push(beginWord);
        int level=0;
        while(!q.empty())
            
       
        {
            level+=1;
            int size=q.size();
            while(size--)
            {
                string node=q.front();
                q.pop();
                for(int i=0;i<node.length();i++)
                {
                    string temp=node;
                    for(char c='a';c<='z';c++)
                    {
                        temp[i]=c;
                        if(node.compare(temp)==0)
                        {
                            continue;
                        }
                        if(temp.compare(endWord)==0)
                        {
                            return level+1;
                        }
                        if(st.find(temp)!=st.end())
                        {
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                }
            }
            
        }
        
       return 0; 
        
    }
};
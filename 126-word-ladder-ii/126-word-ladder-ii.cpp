class Solution {
    // vector<vector<string>>ans;
    // private:
    // void DFS(string &beginWord,string &endWord,unordered_map<string,unordered_set<string>>&adj,vector<string>&path)
    // {
    //     if(beginWord==endWord)
    //     {
    //         ans.push_back(path);
    //         path.pop_back();
    //         return ;
    //     }
    //     for(auto x:adj[beginWord])
    //     {
    //         DFS(x,endWord,adj,path);
    //     }
    //     path.pop_back();
    // }
     unordered_set<string> dic;
    unordered_map<string,int> mp;
  vector<vector<string>> ans;
    void dfs(string ew,vector<string> &temp,string bw)
    {
        
        int curr=mp[ew];
         temp.push_back(ew);
        if(ew==bw)
        {
            reverse(temp.begin(),temp.end());
           ans.push_back(temp);
            reverse(temp.begin(),temp.end());
            temp.pop_back();
            return ;
        }
        for(int i=0;i<ew.size();i++)
        {
            string st=ew;
          for(char ch='a';ch<='z';ch++)
          {
           st[i]=ch;
              if(mp[st] and mp[st]==curr-1)
              { 
                  dfs(st,temp,bw);
              }
         }
        }
        temp.pop_back();
        
    }
public:
    // vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) 
    // {
    //     // unordered_map<string,unordered_set<string>>adj;
        // unordered_set<string>st(wordList.begin(),wordList.end());
        // queue<string>q;
        // q.push(beginWord);
        // unordered_map<string,int>visited;
        // visited[beginWord]=0;
        // while(!q.empty())
        // {
        //    string node=q.front();
        //     q.pop();
        //     string temp=node;
        //     for(int i=0;i<node.size();i++)
        //     {
        //         for(char ch='a';ch<='z';ch++)
        //         {
        //             if(temp[i]==ch)
        //             {
        //                 continue;
        //             }
        //             temp[i]=ch;
        //             if(st.count(temp)>0)
        //             {
        //                 if(visited.count(temp)==0)
        //                 {
        //                     visited[temp]=visited[node]+1;  //increase level
        //                     q.push(temp);
        //                     adj[node].insert(temp);
        //                 }
        //                 else if(visited[temp]==visited[node]+1)
        //                 {
        //                     adj[node].insert(temp);
        //                 }
        //             }
        //         }
        //          temp[i]=node[i];
        //     }
        // }
        // vector<string>path;
        // DFS(beginWord,endWord,adj,path);
        // return ans;
   
    
   
 
    vector<vector<string>> findLadders(string bw, string ew, vector<string>& wl) {
     
      
        for(auto it:wl)dic.insert(it);
        queue<string> q;
        q.push(bw);
        mp[bw]++;
            while(!q.empty())
            {
                auto k=q.front();
                q.pop();
                int steps=mp[k]+1;
                for(int i=0;i<k.size();i++)
                {
                    string temp=k;
                    for(char ch='a';ch<='z';ch++)
                    {
                        temp[i]=ch;
                        if(dic.count(temp) and !mp[temp])
                        {
                            mp[temp]=steps;
                            q.push(temp);
                        }
                    }
                }   
            }
        if(mp[ew])
        {
            vector<string> temp;
            dfs(ew,temp,bw); 
        }
        return ans;
    
    }
};
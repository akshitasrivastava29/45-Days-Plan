class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int score=0;
        int ans=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                score+=1;
                if(ans<score)
                {
                    ans=score;
                }
                power-=tokens[i];
                i++;
            }
            else if(score>0)
            {
                power+=tokens[j];
                score-=1;
                j--;
            }
            else
            {
                break;
            }
        }
        return ans;
        
    }
};
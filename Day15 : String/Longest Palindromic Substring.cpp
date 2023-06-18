class Solution {
public:
    bool check(vector<vector<bool>> &dp, int i, int j, string &s)
    {
        if(i==j)
        {
            return dp[i][j]=true;
        }

        if(j-i==1)
        {
            if(s[i]==s[j])
            {
                return dp[i][j] = true;
            }
            else
            {
                return dp[i][j] = false;
            }
        }

        if(s[i]==s[j] && dp[i+1][j-1] == true)
        {
            return dp[i][j] = true;
        }
        else
        {
            return dp[i][j] = false;
        }
    }

    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int startIndex = 0, maxlen = 0;

        for(int g=0; g<n; g++)
        {
            for(int i=0, j=g; j<n; i++, j++)
            {
                check(dp, i, j, s);
                if(dp[i][j]==true)
                {
                    if(j-i+1 > maxlen)
                    {
                        startIndex = i;
                        maxlen = j-i+1;
                    }
                }
            }
        } 

        return s.substr(startIndex, maxlen);
    }
};

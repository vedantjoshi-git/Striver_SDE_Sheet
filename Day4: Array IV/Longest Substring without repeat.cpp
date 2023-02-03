class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0;
        int max_cnt = 0, n = s.size(); 
        vector<int> mp(256, -1);


        for(int i=0; i<n; i++)
        {
            if(mp[s[i]] != -1)
            {
                low = max(mp[s[i]] + 1, low);
            }
            mp[s[i]] = i;

            if((high - low + 1) > max_cnt)
            max_cnt = high - low + 1;

            high++;
        } 
        return max_cnt;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;
        vector<int> cnt(n,0);

        for(int i=0; i<n; i++)
        {
            cnt[nums[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(cnt[i] > 1)
            {ans = i;
            break;}
        }
        return ans;
    }
};

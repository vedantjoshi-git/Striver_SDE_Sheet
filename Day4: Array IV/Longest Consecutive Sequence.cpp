class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        if(nums.size()==0)
        return 0;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int mx_cnt=1, cnt=1;
        map<int, int> :: iterator it = mp.begin();
        int prev= it->first;
        ++it;
        int curr= it->first;

        while(it != mp.end())
        {
            if(curr - prev != 1)
            {cnt=1;}
            else
            {cnt++;}
            prev = curr;
            ++it;
            curr = it->first;
            mx_cnt = max(cnt, mx_cnt);
            if(it == mp.end())
            break;
        }

        return mx_cnt;
    }
};

class Solution {
public:
    void func(int ind, vector<int> &list, vector<int> &nums, vector<vector<int>> &ans)\
    {
        ans.push_back(list);
        for(int i=ind; i<nums.size(); i++)
        {
            if(i!=ind && nums[i]==nums[i-1]) continue;
            list.push_back(nums[i]);
            func(i+1, list, nums, ans);
            list.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> list; 
        sort(nums.begin(), nums.end());
        func(0, list, nums, ans);
        return ans;
    }
};

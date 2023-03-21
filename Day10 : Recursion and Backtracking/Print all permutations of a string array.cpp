class Solution {
public:
    void func(vector<int> &nums, vector<int> &list, vector<vector<int>> &ans, int freq[])
    {
        if(list.size() == nums.size())
        {
            ans.push_back(list);
            return;
        }
        
            for(int i=0; i<nums.size(); i++)
            {
                if(!freq[i])
                {
                    list.push_back(nums[i]);
                    freq[i] = 1;
                    func(nums, list, ans, freq);
                    freq[i] = 0;
                    list.pop_back();
                }
            }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> list; 
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0; i<nums.size(); i++)
        freq[i] = 0 ;
        func(nums, list, ans, freq);
        return ans;
    }
};

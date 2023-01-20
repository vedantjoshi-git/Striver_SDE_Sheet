class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1, ind_final;
        int n = nums.size();

        for(int i=n-1; i>0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                ind = i;
                break;
            }
        }

        if(ind == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            int prev = ind;
            for(int i=ind+1; i<n; i++)
            {
                if(nums[i]<=nums[prev] && nums[i]>nums[ind-1])
                {
                    prev = i;
                }
            }
            swap(nums[prev], nums[ind-1]);
            reverse(nums.begin()+ind, nums.end());
        }
    }
};

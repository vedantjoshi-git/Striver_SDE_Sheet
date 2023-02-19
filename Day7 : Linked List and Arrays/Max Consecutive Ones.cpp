class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0, max =0;
        int n = nums.size();
        if(n == 1)
        {
            if(nums[0] == 0)
            return 0;
            else
            return 1;
        }

        for(int i=0; i<nums.size(); i++)
        {
                if(nums[i] == 1)
                cnt++;
                else
                {
                    cnt = 0;
                }
    
                if(max < cnt)
                max = cnt;
        }
        

        return max;
    }
};

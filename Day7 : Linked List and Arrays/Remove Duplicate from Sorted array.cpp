class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1,n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
               { nums[j]=nums[i+1];
            j++;}
        }
        return j;
    }
};

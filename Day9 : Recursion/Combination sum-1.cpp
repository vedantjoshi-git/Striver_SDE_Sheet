class Solution {
public:
    void findcombination(int index, int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &list)
{
    if(index == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(list);
        }
        return;
    }

    if(arr[index] <= target)
    {
        list.push_back(arr[index]);
        findcombination(index, target - arr[index],arr, ans, list);
        list.pop_back();
    }
    findcombination(index+1,  target,arr, ans, list);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> list;
        findcombination(0, target, candidates, ans, list);
        return ans;
    }
};

class Solution {
public:
    void func(int ind, vector<int> &can, int target, vector<int> &list, vector<vector<int>> &ans)
    {
        
            if(target == 0)
            {
                ans.push_back(list);
                return;
            }
        
        for(int i=ind; i<can.size(); i++)
        {
            if(ind < i && can[i] == can[i-1]) continue;
            if(can[i] > target) break;

            list.push_back(can[i]);
            func(i+1, can, target-can[i], list, ans);
            list.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        sort(can.begin(), can.end());
        vector<int> list;
        vector<vector<int>> ans; 
        func(0, can, target, list, ans);        
        return ans;
    }
};

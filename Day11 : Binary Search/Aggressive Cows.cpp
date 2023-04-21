// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls[n-1]- stalls[0], ans=1;
        
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(can_place(stalls, n, k, mid))
            {
                ans = max(ans, mid);
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
        
    }
    
    bool can_place(vector<int> &v, int n, int cows, int dist)
    {
        int low = v[0], cnt = 1;
        for(int i=1;i<n;i++)
        {
            if(v[i]-low >= dist)
            {
                cnt++;
                low=v[i];
            }
            if(cnt == cows)
            return true;
        }
        return false;
    }
};

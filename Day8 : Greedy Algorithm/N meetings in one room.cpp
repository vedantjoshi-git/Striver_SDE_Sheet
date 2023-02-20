bool comp(pair<int,int>p1, pair<int,int> p2)
    {
        if(p1.second == p2.second)
        {
            return p1.first<p2.first;
        }
        return p1.second < p2.second;
    }

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back({start[i], end[i]});
        }
        sort(ans.begin(), ans.end(),comp);
        
        int count=0;
        pair<int,int> curr = {0,0};
        
        
        for(int i=0;i<n;i++)
        {
            if(ans[i].first > curr.second)
            {
                count++;
                curr.second = ans[i].second;
            }
        }
    
        return count;
    }
};

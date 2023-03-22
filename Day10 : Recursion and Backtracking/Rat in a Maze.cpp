// User function template for C++

class Solution{

    private:

    void solve(int i, int j, vector<vector<int>> &m, int n, string move, vector<vector<int>> &vis, vector<string> &ans, int delRow[], int delCol[])

    {

        vis[i][j]=1;

        if(i==n-1 and j==n-1 and m[i][j]==1)

        {

            ans.push_back(move);

            return;

        }

        

        string mov = "DLRU";

        for(int indx=0; indx<4; indx++)

        {

            int newRow = i + delRow[indx];

            int newCol = j + delCol[indx];

            if(newRow>=0 and newRow<n and newCol>=0 and newCol<n and !vis[newRow][newCol] and m[newRow][newCol]==1)

            {

                vis[newRow][newCol]=1;

                solve(newRow, newCol, m, n, move+mov[indx], vis, ans, delRow, delCol);

                vis[newRow][newCol]=0;

            }

        }

    }

    public:

    vector<string> findPath(vector<vector<int>> &m, int n) {

        vector<string> ans;

        vector<vector<int>>vis(n, vector<int>(n, 0));

        int delRow[]={1, 0, 0, -1};

        int delCol[]={0, -1, 1, 0};

        if(m[0][0]==1)solve(0, 0, m, n, "", vis, ans, delRow, delCol);

        return ans;

    }

};

    

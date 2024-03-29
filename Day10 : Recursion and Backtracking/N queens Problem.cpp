class Solution {
    bool isSafe(int col, int row, vector<string> &board, int n)
    {
        int dupcol = col; 
        int duprow = row; 
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q')
            {
                return false;
            }
            col--; 
            row--;
        }

        col = dupcol;
        row = duprow;
        while(col >= 0)
        {
            if(board[row][col] == 'Q')
            {
                return false;
            }
            col--;
        }

        col = dupcol;
        while(row < n && col >= 0)
        {
            if(board[row][col] == 'Q')
            {
                return false;
            }
            row++; 
            col--; 
        }
        return true;
    }


public:
    void func(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if(col == n)
        {
            ans.push_back(board);
            return ; 
        }

        for(int row = 0; row < n; row++)
        {
            if(isSafe(col, row, board, n))
            {
                board[row][col] = 'Q';
                func(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n; i++)
        {
            board[i] = s;
        }
        func(0, board, ans, n);
        return ans;
    }
};

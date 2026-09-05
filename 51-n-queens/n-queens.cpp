class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        //? Checking horizontally and vertically
        for (int i = 0; i < n; i++) {
            if (board[row][i] == 'Q' || board[i][col] == 'Q')
                return false;
        }
        //? Checking Diagonally
        // ^ Left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; j--, i--) {
            if (board[i][j] == 'Q')
                return false;
        }
        //^ Right Diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void NQueen(vector<string>& board, int row, int n,
                vector<vector<string>>& ans) {
        // ? Base case
        if (n == row) {
            ans.push_back({board});
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isSafe(board, row, i, n)) {
                board[row][i] = 'Q';
                NQueen(board, row + 1, n, ans);
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        NQueen(board, 0, n, ans);
        return ans;
    }
};
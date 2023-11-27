

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));

        solveNQueensHelper(board, 0, result);

        return result;
    }

private:
    void solveNQueensHelper(vector<string>& board, int row, vector<vector<string>>& result) {
        if (row == board.size()) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < board.size(); ++col) {
            if (is_valid(board, row, col)) {
                board[row][col] = 'Q';
                solveNQueensHelper(board, row + 1, result);
                board[row][col] = '.';
            }
        }
    }

    bool is_valid(const vector<string>& board, int row, int col) const {
        for (int i = 0; i < row; ++i) {
            if (board[i][col] == 'Q' || 
                (col - (row - i) >= 0 && board[i][col - (row - i)] == 'Q') || 
                (col + (row - i) < board.size() && board[i][col + (row - i)] == 'Q')) {
                return false;
            }
        }
        return true;
    }
};

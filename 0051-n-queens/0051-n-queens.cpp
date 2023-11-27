#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        std::vector<std::vector<std::string>> result;
        std::vector<std::string> board(n, std::string(n, '.'));

        solveNQueensHelper(board, 0, result);

        return result;
    }

private:
    void solveNQueensHelper(std::vector<std::string>& board, int row, std::vector<std::vector<std::string>>& result) {
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

    bool is_valid(const std::vector<std::string>& board, int row, int col) const {
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

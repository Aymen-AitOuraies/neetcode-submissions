class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r = 0; r < 9; r++) {
            unordered_set<char> s;
            for(int i = 0; i < 9; i++) {
                if(board[r][i] != '.') {
                    if(s.count(board[r][i]))
                        return false;
                    s.insert(board[r][i]);
                }
            }
        }
        for(int c = 0; c < 9; c++) {
            unordered_set<char> s;
            for(int i = 0; i < 9; i++) {
                if(board[i][c] != '.') {
                    if(s.count(board[i][c]))
                        return false;
                    s.insert(board[i][c]);
                }
            }
        }
            unordered_map<int, unordered_set<char>> m;
        for (int r = 0; r < 9; r++) {
            for(int c = 0; c < 9; c++) {
                int i = (r / 3) * 3 + (c / 3);
                if(board[r][c] != '.') {
                    if(m[i].count(board[r][c]))
                        return false;
                    m[i].insert(board[r][c]);
                }
            }
        }
        return true;
    }
};

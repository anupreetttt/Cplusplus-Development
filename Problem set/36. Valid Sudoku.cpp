// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.


class Solution {
public:
    int coord2gridIdx(int i, int j){
        /*
        grid 0: i: [0-2], j:[0-2]
        grid 1: i: [0-2], j:[3-5]
        grid 2: i: [0-2], j:[6-8]
        */
        
        return i/3 * 3 + j/3;
    };
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9), cols(9), grids(9);
        pair<set<char>::iterator, bool> ret;
        
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                char c = board[i][j];
                if(c == '.') continue;
                int gridIdx = coord2gridIdx(i, j);
                ret = rows[i].insert(c);
                if(!ret.second) return false;
                ret = cols[j].insert(c);
                if(!ret.second) return false;
                ret = grids[gridIdx].insert(c);
                if(!ret.second) return false;
            }
        }
        
        return true;
    }
};
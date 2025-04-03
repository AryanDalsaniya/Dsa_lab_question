class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          vector<unordered_set<char>> r(9), c(9), boxes(9);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char num = board[i][j];
            if (num == '.') continue;  

            int idx = (i / 3) * 3 + (j / 3); 

            
            if (r[i].count(num) || c[j].count(num) || boxes[idx].count(num)) {
                return false;
            }

        
            r[i].insert(num);
            c[j].insert(num);
            boxes[idx].insert(num);
        }
    }
    return true;
    }
};

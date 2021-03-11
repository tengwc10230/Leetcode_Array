#include <bits/stdc++.h> 
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    char num;
    unordered_map<char, int> row[9], col[9], block[9];
    for (int j = 0; j < 9; j ++) {
        for (int i = 0; i < 9; i ++)
        {
            num = board[i][j];
            if (num != '.' && (row[i][num] ++ > 0 || col[j][num] ++ > 0 || block[i/3 + 3*(j/3)][num] ++ > 0))
                return false;
            
        }
    }
    return true;    
}

int main(){

    vector<vector<char>> board{{'5','3','.','.','7','.','.','.','.'},
                                 {'6','.','.','1','9','5','.','.','.'},
                                 {'.','9','8','.','.','.','.','6','.'},
                                 {'8','.','.','.','6','.','.','.','3'},
                                 {'4','.','.','8','.','3','.','.','1'},
                                 {'7','.','.','.','2','.','.','.','6'},
                                 {'.','6','.','.','.','.','2','8','.'},
                                 {'.','.','.','4','1','9','.','.','5'},
                                 {'.','.','.','.','8','.','.','7','9'}};

    bool valid = isValidSudoku(board);
    cout << valid << endl;

    
    return 0;
}
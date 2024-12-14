class Solution {
public:
    bool isSafe(char value, vector<vector<char>>& board, int row, int col){
        for(int i = 0; i < 9; i++){
            if(board[row][i] == value){
                return false;
            }

            if(board[i][col] == value){
                return false;
            }

            if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)] == value){
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        int n = board.size(); // Use board.size() instead of board[0].size()
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){ // Use n instead of n (assuming Sudoku is 9x9)
                if(board[i][j] == '.'){
                    for(char value = '1'; value <= '9'; value++){
                        if(isSafe(value, board, i, j)){
                            board[i][j] = value;

                            bool ageka = solve(board);

                            if(ageka == true){
                                return true;
                            }
                            else{
                            board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

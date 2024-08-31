class Solution {
public:

    bool isValid(vector<vector<char>> &board,int row, int col,char ch){
        //row duplication
        for(int j=0;j<9;j++){
            if(j != col && board[row][j] == ch) return false;
        }
        //col duplication
        for(int i=0;i<9;i++){
            if(i != row && board[i][col] == ch) return false;
        }
        int rf = row-(row % 3 );
        int cf = col-(col % 3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i+rf][j+cf] == ch && (i+rf) != row && (j+cf) != col) return false;
            }
        }
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    char ch = board[i][j];
                    if(!isValid(board,i,j,ch)) return false;
                }
            }
        }
        return true;
    }
};

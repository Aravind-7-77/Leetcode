class Solution {
public:
    bool isValid(vector<vector<char>> board,int rw,int cl,int c){
        for(int i=0;i<9;i++){
            if(board[i][cl]==c && i!=rw) return false;
        }
        for(int j=0;j<9;j++){
            if(board[rw][j]==c && j!=cl) return false;
        }
        int tprw=3*(rw/3),tpcl=3*(cl/3);
        for(int i=tprw;i<tprw+3;i++){
            for(int j=tpcl;j<tpcl+3;j++){
                if(board[i][j]==c && i!=rw && j!=cl) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(!isValid(board,i,j,board[i][j])) return false;
                }
            }
        }
        return true;
    }
};
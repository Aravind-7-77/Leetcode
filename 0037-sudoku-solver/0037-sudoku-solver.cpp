class Solution {
public:
    bool isValid(vector<vector<char>>& board,int rw,int cl,char c){
        for(int i=0;i<9;i++){
            if(board[i][cl]==c) return false;
        }
        for(int j=0;j<9;j++){
            if(board[rw][j]==c) return false;
        }
        int tprw=rw/3,tpcl=cl/3;
        for(int i=3*tprw;i<3*tprw+3;i++){
            for(int j=3*tpcl;j<3*tpcl+3;j++){
                if(board[i][j]==c) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;
                            if(solve(board)) return true;
                            board[i][j]='.';   
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
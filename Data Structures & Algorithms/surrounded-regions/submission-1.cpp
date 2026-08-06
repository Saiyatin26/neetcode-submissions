class Solution {
public:
    void solve(vector<vector<char>>& board) {
        vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1){
                    if(board[i][j]=='O' && visited[i][j]==false ){
                        dfs(visited,board,i,j);
                    }
                }
            }
        }

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(visited[i][j]==false && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }

    void dfs(vector<vector<bool>>&visited,vector<vector<char>>& board,int i,int j){
        if( i<0 || j<0 || i>board.size()-1 || j>board[0].size()-1){
            return;
        }
        if(board[i][j]=='X'){
            return;
        }
        if(visited[i][j]){
            return;
        }
        visited[i][j]=true;
        dfs(visited,board,i-1,j);
        dfs(visited,board,i+1,j);
        dfs(visited,board,i,j-1);
        dfs(visited,board,i,j+1);
    }
};

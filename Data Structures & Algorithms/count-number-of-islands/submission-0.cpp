class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int cou=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && visited[i][j]==false){
                    dfs(visited,grid,i,j);
                    cou++;
                }
            }
        }
        return cou;
    }

    void dfs(vector<vector<bool>> &visited,vector<vector<char>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0') return ;
        if(visited[i][j]){
            return;
        }
        visited[i][j]=true;
        dfs(visited,grid,i-1,j);
        dfs(visited,grid,i+1,j);
        dfs(visited,grid,i,j-1);
        dfs(visited,grid,i,j+1);
        return;
    }
};

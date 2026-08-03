class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    return dfs(visited,grid,i,j);
                }
            }
        }
        return 0;
       
    }
    int dfs(vector<vector<bool>>&visited,vector<vector<int>>& grid,int n,int k){
        if(n<0 || k<0 || n>=grid.size() || k>=grid[0].size() || grid[n][k]==0) return 1;
        if(visited[n][k]){
            return 0;
        }
        
        visited[n][k]=true;
        int a=dfs(visited,grid,n-1,k);
        int b=dfs(visited,grid,n+1,k);
        int c=dfs(visited,grid,n,k-1);
        int d= dfs(visited,grid,n,k+1);
       
        return a+b+c+d;

    }
};
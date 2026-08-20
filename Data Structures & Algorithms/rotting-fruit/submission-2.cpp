class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int a=0;
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        while(!q.empty() && fresh>0 ){
            
            int size=q.size();
            while(size--){
                auto [r,c] =q.front();
            q.pop();
            if(r-1>=0 && grid[r-1][c]==1){
                grid[r-1][c]=2;
                q.push({r-1,c});
                fresh--;

            }
            if(r+1<=grid.size()-1 && grid[r+1][c]==1){
                grid[r+1][c]=2;
                q.push({r+1,c});
                fresh--;
            }
            if(c-1>=0 && grid[r][c-1]==1){
                grid[r][c-1]=2;
                q.push({r,c-1});
                fresh--;
            }
            if(c+1<=grid[0].size()-1 && grid[r][c+1]==1){
                grid[r][c+1]=2;
                q.push({r,c+1});
                fresh--;
            }
            }
            a++;
            
        }
        return fresh ==0 ?a:-1;
    }
};

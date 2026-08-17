class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>ans;
        vector<vector<bool>>dfsp(heights.size(),vector<bool>(heights[0].size(),false));
        vector<vector<bool>>dfsa(heights.size(),vector<bool>(heights[0].size(),false));
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(i==0 || j==0){
                    dfspacific(heights,dfsp,i,j);
                }
            }
        }
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(i==heights.size()-1 || j== heights[0].size()-1){
                    dfsatlanta(heights,dfsa,i,j);
                }
            }
        }
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                if(dfsp[i][j]==dfsa[i][j] && dfsp[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans; 
    }
     void dfspacific(vector<vector<int>>& heights, vector<vector<bool>>& pa,int a,int b){
        if( a<0 || a>=heights.size()|| b<0 || b>=heights[0].size()|| pa[a][b]  ) {
            return;
        }
        pa[a][b]=true;
        if(a-1>=0 && heights[a][b]<= heights[a-1][b] ){
            dfspacific(heights,pa,a-1,b);
        }
        if(a+1<=heights.size()-1 && heights[a][b]<=heights[a+1][b] ){
            dfspacific(heights,pa,a+1,b);
        }
        if(b-1>=0 && heights[a][b]<=heights[a][b-1] ){
           dfspacific(heights,pa,a,b-1);
        }
        if(b+1<=heights[0].size()-1 && heights[a][b]<=heights[a][b+1] ){
            dfspacific(heights,pa,a,b+1);
        }

    }

    void dfsatlanta(vector<vector<int>>& heights, vector<vector<bool>>& pa,int a,int b){
        if( a<0 ||a>heights.size()-1 ||b<0|| b>heights[0].size()-1 || pa[a][b] ){
            return;
        }
        pa[a][b]=true;
        if( a-1>=0 && heights[a][b]<=heights[a-1][b] ){
            dfsatlanta(heights,pa,a-1,b);
        }
        if( a+1<=heights.size()-1 && heights[a][b]<=heights[a+1][b] ){
            dfsatlanta(heights,pa,a+1,b);
        }
        if(b-1>=0 && heights[a][b]<=heights[a][b-1] ){
           dfsatlanta(heights,pa,a,b-1);
        }
        if(b+1<=heights[0].size()-1 && heights[a][b]<=heights[a][b+1] ){
            dfsatlanta(heights,pa,a,b+1);
        }

    }
};

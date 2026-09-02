class Solution {
public:
    void dfs(int n,vector<vector<int>>&adj,vector<int>&visited){
        if(visited[n]){
            return;
        }
        visited[n]=1;
        for(auto i:adj[n]){
            dfs(i,adj,visited);
        }
        return;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<int>visited(n,0);
        for(int i=0;i<edges.size();i++){
            int a=edges[i][0];
            int b=edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(0,adj,visited);
        int cou=1;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(i,adj,visited);
                cou++;
            }
        }
        return cou;
    }
};

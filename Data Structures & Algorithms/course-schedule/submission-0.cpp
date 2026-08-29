class Solution {
public:

    bool dfs(int n,vector<vector<int>> &adj,vector<int>& visited){
        if(visited[n]==1){
            return false;
        }
        if (visited[n]==2){
            return true;
        }
        visited[n]=1;
        for(auto i:adj[n]){
            if(!dfs(i,adj,visited)){
                return false;
            }
        }
        visited[n]=2;
        return true;
    }

    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        vector<int>visited(n,0);
        for(int i=0;i<pre.size();i++){
            int course=pre[i][0];
            int before=pre[i][1];
            adj[before].push_back(course);
        }
        for(int i=0;i<n;i++){
            if(!dfs(i,adj,visited)){
                return false;
            }
        }
        return true;
    }
};

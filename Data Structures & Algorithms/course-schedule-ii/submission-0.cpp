class Solution {
public:
    bool dfs(int next,vector<vector<int>>&adj,vector<int> &visited,vector<int> &arr){
        if(visited[next]==1){
            return false;
        }
        if(visited[next]==2){
            return true;
        }
        visited[next]=1;
        for(auto i:adj[next]){
            if(!dfs(i,adj,visited,arr)){
                return false;
            }
        }
        visited[next]=2;
        arr.push_back(next);
        return true;
    }
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        vector<int>visited(n,0);
        vector<int>arr;
        for(int i=0;i<pre.size();i++){
            int course=pre[i][0];
            int before=pre[i][1];
            adj[before].push_back(course);
        }
        for(int i=0;i<n;i++){
            if(!dfs(i,adj,visited,arr)){
                return {};
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;

    }
};

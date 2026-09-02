class Solution {
public:
    
    int n;
    vector<int>parent;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        n=edges.size();
        parent.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            if(find(u)!=find(v)){
                unit(u,v);
            }
            else{
                return edges[i];
            }
        }
        return {};

    }

    int find(int x){
        if(parent[x]!=x){ 
            parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void  unit(int u,int v){
        int rootu=find(u);
        int rootv=find(v);
        parent[rootu]=rootv;
    }
};

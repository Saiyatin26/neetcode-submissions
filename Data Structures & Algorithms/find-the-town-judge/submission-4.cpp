class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool>trusted(n+1,false);
        trusted[0]=true;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<trust.size();i++){
            for(int j=0;j<1;j++){
                mp[trust[i][j]].push_back(trust[i][j+1]);
            }
        }
        if(mp.size()==n){
            return -1;
        }
        for(auto i:mp){
            trusted[i.first]=true;
        }
        int a=0;
        for(int i=1;i<=n;i++){
            if(!trusted[i]){
                a=i;
            }
        }
        for(auto i:mp){
            vector<int>b=i.second;
            bool t=false;
            for(int j=0;j<b.size();j++){
                if(a==b[j]){
                    t=true;
                }
            }
            if(!t){
                return -1;
            }
            t=false;
        }
        return a;
    }
};
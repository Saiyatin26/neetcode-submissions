class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        double pretime=0;
        int fleet=0;
        
        for(auto i:v){
            double time=(double)(target-i.first)/i.second;
            if(time>pretime){
                pretime=time;
                fleet++;
            }
        }
        return fleet;
    }
};

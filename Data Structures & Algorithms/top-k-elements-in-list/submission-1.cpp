class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int max=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if( mp[nums[i]]>max){
                max++;
            }
        }
        vector<int>ans;
        int cou=0;
        while(cou<k){
            int a=0;
            int max=0;
            for(auto& i:mp){
                if(i.second>max){
                    max=i.second;
                    a=i.first;
                }
            }
            ans.push_back(a);
            mp.erase(a);
            cou++;

        }
        
        return ans;
    }
};

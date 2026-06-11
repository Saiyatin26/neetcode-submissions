class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        int val1=0;
        int val2=0;
        bool dup=false;
        for(int i=0;i<nums.size();i++){
            if(mp.contains(nums[i])){
                dup=true;
            }
            mp[nums[i]].push_back(i);
        }
        if(dup){
            for(auto &i:mp){
                int slow;
                if(i.second.size()>1){
                    vector<int>a=i.second;
                    slow=a[0];
                    for(int i=1;i<a.size();i++){
                        if(abs(slow-a[i])<=k){
                            return true;
                        }
                        else{
                            slow=a[i];
                        }
                    }
                }
            }
        }
        
        return false;
    }
};
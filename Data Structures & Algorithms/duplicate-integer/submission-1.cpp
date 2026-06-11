class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int a=nums.size();
        for(int i=0;i<a;i++){
            mp[nums[i]]=1+mp[nums[i]];
            if(mp[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
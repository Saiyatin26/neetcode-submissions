class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;
        vector<int>arr;
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
            
        }
        for(auto &i:hash){
            if(i.second>n)
            arr.push_back(i.first);
        }
        hash.clear();
        return arr;
    }
};
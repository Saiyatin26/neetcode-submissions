class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            int sum=nums[i];
            int fast=i;
            while(fast<nums.size()){
                if(sum==k){
                    ans++;
                }
                fast++;
                sum+=nums[fast];
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=999;
        int left=0;
        vector<int>pre(nums.size(),0);
        pre[0]=nums[0];
        for(int i=0;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        if(pre[nums.size()-1]<target){
            return 0;
        }
        for(int right=0;right<nums.size();right++){
            if(pre[right]>=target){
                while(left<right){
                    int a=pre[right]-pre[left];
                    if(a>=target){
                        left++;
                    }
                    else if(a<target){
                        break;
                    }
                }
                sum=min(sum,right-left+1);
            }
        }
        return sum;
    }
};
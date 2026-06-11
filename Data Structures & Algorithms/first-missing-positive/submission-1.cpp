class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a=nums.size();
        int allm=0;
        int max=-9999;
        for(int i=0;i<a;i++){
            if(nums[i]<0){
                allm++;
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        if(max==0 || allm==a){
            return 1;
        }
        int c=1;
        while(c<=max ){
            if(find(nums.begin(),nums.end(),c)==nums.end()){
                return c;
            }
            c++;
        }
        return max+1;
    }
};
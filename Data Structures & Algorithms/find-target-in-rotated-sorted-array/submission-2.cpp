class Solution {
public:
    int binary(vector<int>nums,int i,int j,int target){
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       int b=nums.size()-1;
       while(nums[0]>nums[b]){
        b--;
       }
       if(b==nums.size()-1){
        int i=0;
        int j=nums.size()-1;
        int ans=binary(nums,i,j,target);
        if(ans!=-1){
            return ans;
        }

       }
       else if(b!=nums.size()-1){
        if(nums[0] <=target &&  target <= nums[b]){
            int i=0;
            int j=b;
            int ans=binary(nums,i,j,target);
            if(ans!=-1){
                return ans;
            }
        }
        else{
            int i=b+1;
            int j=nums.size()-1;
            int ans=binary(nums,i,j,target);
            if(ans!=-1){
                return ans;
            }
        }
       }
       return -1;
    }
};

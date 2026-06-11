class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int l=0;
        int r=k-1;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        while(l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;
            r--;
        }
        int l1=k;
        int r1=nums.size()-1;
        while(l1<r1){
            int temp=nums[l1];
            nums[l1]=nums[r1];
            nums[r1]=temp;
            l1++;
            r1--;
        }
        
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxleft=height[left];
        int maxright=height[right];
        int sum=0;
        while(left<right){
            int a=min(maxleft,maxright);
            if(a==maxleft){
                sum+=max(0,a-height[left]);
                left++;
                if(maxleft<height[left]){
                    maxleft=height[left];
                }
            }
            else if(a==maxright){
                sum+=max(0,a-height[right]);
                right--;
                if(maxright<height[right]){
                    maxright=height[right];
                }
            }
        }
        return sum;
    }
};

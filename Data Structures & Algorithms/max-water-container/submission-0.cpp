class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<right){
            int widht=right-left;
            int heigh=min(height[left],height[right]);
            int area=widht*heigh;
            ans=max(ans,area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};

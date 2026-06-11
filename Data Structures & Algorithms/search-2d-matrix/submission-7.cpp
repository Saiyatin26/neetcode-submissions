class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int n=m[0].size();
        int a=m.size();
        int left=0;
        int right=n-1;
        int max=0;
       
            while(max<a){
            if(m[max][right]>=target && m[max][left]<=target){
                break;
            }
            max++;
        
        }
        if(max==a){
            return false;
        }
        while(left<=right){
            int mid=(left+right)/2;
            if(m[max][mid]==target){
                return true;
            }
            else if(m[max][mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
};

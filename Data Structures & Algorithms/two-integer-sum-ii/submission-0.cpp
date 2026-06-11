class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int a=0;
        int b=arr.size()-1;
        vector<int>ans={0,0};
        while(a<b){
            if(arr[a]+arr[b]==target){
                ans[0]=a+1;
                ans[1]=b+1;
                break;
            }
            else if(arr[a]+arr[b]<target){
                a++;
            }
            else{
                b--;
            }
        }
        return ans;
    }
};
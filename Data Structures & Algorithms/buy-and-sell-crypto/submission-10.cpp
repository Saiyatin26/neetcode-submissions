class Solution {
public:
    int maxProfit(vector<int>& prices){
        int left=0;
        int right=1;
        int ans=0;
        while(right<prices.size()){
            int diff=prices[right]-prices[left];
            if(diff<0){
                left=right;
            }
            ans=max(ans,diff);
            right++;
        }
        return ans;
    }
};

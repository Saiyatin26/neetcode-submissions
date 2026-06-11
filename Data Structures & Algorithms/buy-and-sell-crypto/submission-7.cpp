class Solution {
public:
    int maxProfit(vector<int>& prices){
        int left=0;
        int curr=0;
        int ans=0;
        for(int right=1;right<prices.size();right++){
            curr=prices[right]-prices[left];
            if(curr<0){
                left=right;
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};

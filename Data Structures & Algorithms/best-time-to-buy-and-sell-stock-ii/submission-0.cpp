class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int left=0;
        int right=0;
        for(int right=1;right<prices.size();right++){
            int diff=prices[right]-prices[left];
            if(diff>0){
                sum+=diff;
                left=right;
            }
            if(diff<=0){
                left=right;
            }
        }
        return sum;
    }
};
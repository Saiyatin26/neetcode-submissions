class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        if(digits[n]<9){
            digits[n]++;
            return digits;
        }
        int count=1;
        for(int i=0;i<n;i++){
            if(digits[i]==9){
                count++;
            }
        }
        if(count==digits.size()){
            vector<int>ans(digits.size()+1,0);
            ans[0]=1;
            return ans;
        }
        int c=1;
        while(c==1){
            digits[n]=0;
            if(digits[n-1]==9){
                c=1;
            }
            else{
                digits[n-1]=digits[n-1]+1;
                break;
                return digits;
            }
            n--;
        }
        return digits;
    }
};

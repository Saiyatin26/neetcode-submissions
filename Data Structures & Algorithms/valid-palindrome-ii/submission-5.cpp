class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return ispalin(s,left+1,right) || ispalin(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }

    bool ispalin(string s,int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                 return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
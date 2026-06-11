class Solution {
public:
    bool isPalindrome(string s) {
       vector<char>v;
       for(char i:s){
        if((i>=65 && i<=90) || (i>=97 && i<=122) || (i-'0'>=0 && i-'0'<=9) ){
            v.push_back(tolower(i));
        }
       }
       int i=0,j=v.size()-1;
       while(i<j){
        if(v[i]!=v[j]){
            return false;
        }
        i++;
        j--;
       }
       return true;
    }
};
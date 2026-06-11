class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=word1.length()-1;
        int right=word2.length()-1;
        int i=0;
        int j=0;
        string ans;
        int k=0;
        while(i<=left && j<=right){
            if(k%2!=0){
                ans+=word2[j];
                j++;
            }
            else if(k%2==0){
                ans+=word1[i];
                i++;
            }
            k++;
        }
        while(i<=left){
            ans+=word1[i];
            i++;
        }
        while(j<=right){
             ans+=word2[j];
             j++;
        }
        return ans;
    }
};
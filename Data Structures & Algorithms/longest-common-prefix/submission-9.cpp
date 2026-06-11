class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=999;
        int index=0;
        if (strs.empty()) return ""; 
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<n){
                n=strs[i].length();
                index=i;
            }
        }
        string ans;
        for(int i=0;i<n;i++){
            int cou=0;
            for(int j=0;j<strs.size();j++){
                if(strs[index][i]!=strs[j][i]){
                    return strs[index].substr(0, i);
                }
               
            }
            
        }
        return strs[index].substr(0, n);
    }
};
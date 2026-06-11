class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int cou1=0;
        for(auto i:s){
            mp1[i]++;
        }
        for(auto j:t){
            mp2[j]++;
        }
        if(mp1.size()!=mp2.size()){
            return false;
        }
        int cou=0;
        for(auto i:mp1){
            cou1++;
            if(mp2[i.first]==mp1[i.first]){
                cou++;
            }
        }
        
        return cou==cou1?true:false;
    }
};
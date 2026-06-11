class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string i:strs){
            string b=i;
            sort(b.begin(),b.end());
            mp[b].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto &it:mp){
        ans.push_back(it.second);
        }
        return ans;
    }
};
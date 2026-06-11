class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v(2);
        unordered_set<int>a1(nums1.begin(),nums1.end());
        unordered_set<int>a2(nums2.begin(),nums2.end());
        for(auto &i:a1){
            if(a2.find(i)!=a2.end()){
               continue; 
            }
            else{
                v[0].push_back(i);
            }
            
        }
        for(auto &i:a2){
            if(a1.find(i)!=a1.end()){
               continue; 
            }
            else{
                v[1].push_back(i);
            }
            
        }
         return v;
    }
};
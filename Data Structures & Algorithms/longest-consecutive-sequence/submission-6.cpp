class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int>v;
        if(nums.size()==0){
            return 0;
        }
        for(auto &i:nums){
            if(find(v.begin(),v.end(),i)==v.end()){
                v.push_back(i);
            }
        }
        v.push_back(9999);
        sort(v.begin(),v.end());
        int count=1;
        int max=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]+1==v[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};

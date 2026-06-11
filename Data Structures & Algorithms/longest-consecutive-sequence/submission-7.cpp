class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set<int>s;
        if(nums.size()==0){
            return 0;
        }
        for(auto &i:nums){
            s.insert(i);
        }
        vector<int>v(s.begin(),s.end());
        int count=1;
        int max=1;
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

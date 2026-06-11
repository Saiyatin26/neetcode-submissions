class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>result;

        for(int i=0;i<temp.size();i++){
            result.push_back(0);
        }
        for(int i=0;i<temp.size()-1;i++){
            int count=0;
            for(int j=i+1;j<temp.size();j++){
                count++;
                if(temp[i]<temp[j]){
                    result[i]=count;
                    break;
                }
            }
        }
        return result;
    }
};

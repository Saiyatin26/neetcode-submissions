class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>result;
        stack<pair<int,int>>st;
        for(int i=0;i<temp.size();i++){
            result.push_back(0);
        }
        for(int i=0;i<temp.size();i++){
            int t=temp[i];
            while(!st.empty() && t>st.top().first){
                auto pair=st.top();
                st.pop();
                result[pair.second]=i-pair.second;
            }
            st.push({t,i});
        }
        return result;
    }
};

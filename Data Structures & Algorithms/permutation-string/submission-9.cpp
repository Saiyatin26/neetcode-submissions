class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        sort(s1.begin(),s1.end());
        int k=s1.length();
        for(int i=0;i<=s2.length()-k;i++){
            int left=i;
            string st=s2.substr(left,k);
            sort(st.begin(),st.end());
            if(st==s1){
                return true;
            }
        }
        return false;
    }
};

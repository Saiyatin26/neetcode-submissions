class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int op=0;
        int close=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='('|| s[i]=='{'){
                op++;
            }
            else{
                close++;
            }
        }
        if(op!=close){
            return false;
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='('|| s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==')'|| s[i]==']'){
                if(st.empty()){
                    return false;
                }
                if(st.top() =='{' && s[i]=='}'){
                    st.pop();
                }
                else if(st.top() =='(' && s[i]==')'){
                    st.pop();
                }
                else if(st.top() =='[' && s[i]==']'){
                    st.pop();
                }
                
                else{
                    return false;
                }
            }
        }
        
        return true;

    }
};

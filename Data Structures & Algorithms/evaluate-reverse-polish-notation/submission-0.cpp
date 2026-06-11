class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;
        for(int i=0;i<t.size();i++){
            if(t[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(c);
            }
            else if(t[i]=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=b-a;
                st.push(c);
            }
            else if(t[i]=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a*b;
                st.push(c);
            }
            else if(t[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=b/a;
                st.push(c);
            }
            else{
                st.push(stoi(t[i]));

            }
        }
        int ans=st.top();
        return ans;
    }
};

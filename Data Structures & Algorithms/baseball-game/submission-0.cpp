class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>st;
        for(int i=0;i<op.size();i++){
            if(op[i]=="C"){
                st.pop();
            }
            else if(op[i]=="D"){
                int a=st.top();
                st.pop();
                int c=a*2;
                st.push(a);
                st.push(c);
            }
            else if(op[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(b);
                st.push(a);
                st.push(c);
            }
            else{
                st.push(stoi(op[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
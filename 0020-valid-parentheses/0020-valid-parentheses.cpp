class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<int> st;
        if(n%2!=0) return false; 
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.top()==')' || st.top()=='}' || st.top()==']'){
                char ch=st.top();
                st.pop();
                if(st.empty()) return false;
                if((st.top()=='(' && ch!=')') || (st.top()=='{' && ch!='}') || (st.top()=='[' && ch!=']')){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
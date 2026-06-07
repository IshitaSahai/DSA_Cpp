class Solution {
public:
    // bool isValid(string s) {
    //     int n=s.length();
    //     stack<int> st;
    //     if(n%2!=0) return false; 
    //     for(int i=0;i<n;i++){
    //         st.push(s[i]);
    //         if(st.top()==')' || st.top()=='}' || st.top()==']'){
    //             char ch=st.top();
    //             st.pop();
    //             if(st.empty()) return false;
    //             if((st.top()=='(' && ch!=')') || (st.top()=='{' && ch!='}') || (st.top()=='[' && ch!=']')){
    //                 return false;
    //             }else{
    //                 st.pop();
    //             }
    //         }
    //     }
    //     if(!st.empty()) return false;
    //     return true;
    // }
    // bool isValid(string s){
    //     int balance=0, n=s.length();
    //     for(int i=0;i<n;i++){
    //         if(s[i]=='(') balance++;
    //         else balance--;
    //     }
    //     if(balance==0) return true;
    //     return false;
    // }
    void solve(string curr, int n, int open, int closed, vector<string> &v){
        if(curr.length()==2*n){
            v.push_back(curr);
            curr="";
            return;
        } 
        if(open<n){
            solve(curr+"(",n,open+1,closed,v);
        }
        if(closed<open){
            solve(curr+")",n,open,closed+1,v);
            closed++;
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string> v;
        solve(curr,n,0,0,v);
        return v;
    }
};
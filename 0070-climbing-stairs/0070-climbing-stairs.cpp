class Solution {
public:
// RECURSION
    // void helper(int n, int top, int& cnt){
    //     if(top>n) return;
    //     if(top==n){
    //         cnt++;
    //         return;
    //     }
    //     //1 step 
    //     helper(n,top+1,cnt);
    //     //2 step
    //     helper(n,top+2,cnt);
    // }

    int helper(int n, int top, vector<int> &dp){
        if(top>n) return 0;
        if(top==n) return 1;
        if(dp[top]!=-1) return dp[top];
        return dp[top]=helper(n,top+1,dp)+helper(n,top+2,dp);
    }
    int climbStairs(int n) {
        // int top=0, cnt=0;
        int top=0;
        vector<int> dp(n+1,-1);
        return helper(n,top,dp);
    }
};
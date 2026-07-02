class Solution {
public:
    int rob(vector<int>& nums) {
        // int n = nums.size();

        // if (n == 1)
        //     return nums[0];

        // vector<int> dp(n);

        // dp[0] = nums[0];
        // dp[1] = max(nums[0], nums[1]);

        // for (int i = 2; i < n; i++) {
        //     dp[i] = max(nums[i] + dp[i - 2],
        //                 dp[i - 1]);
        // }

        // return dp[n - 1];

        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i]+prev2;
            int nottake=0+prev;
            int curri=max(take,nottake);
            prev2=prev;
            prev=curri;
        }   
        return prev;
    }
};
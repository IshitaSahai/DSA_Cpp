class Solution {
public:
    vector<int> v;
    void helper(vector<int> &nums, int i, vector<vector<int>> &ans, vector<int> &v){
        int n=nums.size();
        if(i>=n){
            ans.push_back(v);
            return;
        }
        //pick
        v.push_back(nums[i]);
        helper(nums,i+1,ans,v);
        //not pick
        v.pop_back();
        helper(nums,i+1,ans,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,0,ans,v);
        return ans;
    }
};
class Solution {
public:
    void generate(vector<int> &nums, int i, vector<vector<int>> &ans, vector<int> &v){
        int n=nums.size();
        ans.push_back(v);//pick the v on each call as at each call it produces an answer ie. the subset not only when the last element is reached 
        if(i>=n){
            return;
        }
        for(int j=i;j<n;j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            //pick
            v.push_back(nums[j]);
            generate(nums, j+1, ans,v);
            //not pick=>pop
            v.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(nums.begin(),nums.end());
        generate(nums, 0, ans, v);
        return ans;
    }
};
class Solution {
public:
    vector<int> v;
    int sum=0;
    set<vector<int>> st;
    void generate(vector<int>& candidates, vector<vector<int>> &ans,vector<int> &v, int target, int i, int sum, set<vector<int>> &st){
        int n=candidates.size();
        if(sum>target){
            return;
        }
        if(i==n){
            if(sum==target){
                st.insert(v);
                // ans.push_back(v);
            }
            return;
        }
        //pick same element
        v.push_back(candidates[i]);
        generate(candidates, ans, v, target, i, sum+candidates[i], st);
        //pick diff element/not pick the current element
        v.pop_back();
        generate(candidates, ans, v, target, i+1,sum, st);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        generate(candidates, ans, v, target, 0, sum, st);
        for(auto &it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
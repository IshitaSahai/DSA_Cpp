class Solution {
public:
    void generate(vector<int> &candidates, int target, int i, int sum, vector<int> &v, vector<vector<int>> &ans){
        int n=candidates.size();
        if(sum==target){
            ans.push_back(v);
            return;
        }
        if(sum>target){
            return;
        }
        if(i==n){
            if(sum==target){
                ans.push_back(v);
                return;
            }
        }
        for(int j=i; j<n; j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            //pick the element
            v.push_back(candidates[j]);
            generate(candidates, target, j+1, sum+candidates[j], v, ans);
            //not pick the element
            v.pop_back();
            // generate(candidates, target, j+1, sum, v, ans);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        int sum=0;
        vector<vector<int>> ans;
        // set<vector<int>> s;
        sort(candidates.begin(), candidates.end());
        generate(candidates, target, 0, sum, v, ans);
    //    for(auto &it:s){
    //          ans.push_back(it);
    //     }
        return ans;
    }
};
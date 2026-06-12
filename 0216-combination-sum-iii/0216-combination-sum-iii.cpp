class Solution {
public:
    void generate(int k , int i, int n, vector<int> &temp, vector<vector<int>> &ans, vector<int> &v, int sum){
        if(sum>n){
            return;
        }
        if(i>=v.size()){
            if(sum==n && temp.size()==k){
                ans.push_back(temp);
            }
            return;
        }
        //pick
        temp.push_back(v[i]);
        generate(k,i+1,n,temp, ans, v, sum+v[i]);
        //pop
        temp.pop_back();
        generate(k,i+1, n, temp, ans, v, sum);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        generate(k,0, n, temp, ans, v, sum);
        return ans;
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int dup=0, missing=0;
        for(int i=1;i<=n;i++){
            // if(mpp[nums[i]]==2 && mpp.find(nums[i]+1)==mpp.end()){
            //     v.push_back(nums[i]);
            //     v.push_back(nums[i]+1);
            // }else if(mpp[nums[i]]==2 && mpp.find(nums[i]-1)==mpp.end()){
            //     v.push_back(nums[i]-1);
            //     v.push_back(nums[i])
            // }
            // break;
            if(mpp[i]==2){
                // v.push_back(i);
                dup=i;
            }else if(mpp[i]==0){
                // v.push_back(i);
                missing=i;
            }
        }
        return {dup,missing};
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j] && abs(i-j)<=k) return true;
        //     }
        // }
        // int i=0, j=1;
        // while(i<n && j<n){
        //     if(nums[i]==nums[j] && abs(i-j)<=k){
        //         return true;
        //     }else if(nums[i]!=nums[j] && j!=n-1 && abs(i-j)<=k){
        //         j++;
        //     }else if(nums[i]!=nums[j] || abs(i-j)>k){
        //         i++;
        //     }
        // }
        // return false;
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])!=mpp.end()){
                int prev=mpp[nums[i]];
                if(abs(i-prev)<=k) return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};
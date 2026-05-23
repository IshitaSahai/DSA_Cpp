class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size(), cnt=1, maxi=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                cnt++;
            }else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};
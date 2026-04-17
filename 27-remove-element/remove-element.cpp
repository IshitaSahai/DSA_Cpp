class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int cnt=0, i=0, j=n-1;
        // while(i<n && j<n){
        //     if(nums[i]==val && nums[j]!=val){
        //         swap(nums[i],nums[j]);
        //         i++;
        //     }
        //     if(nums[j]==val){
        //         j++;
        //     }
        // }
        while(i<j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i],nums[j]);
                // j--;
            }
            if(nums[j]==val) j--;
            if(nums[i]!=val) i++; 
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                cnt++;
            }
        }
        return cnt;
    }
};
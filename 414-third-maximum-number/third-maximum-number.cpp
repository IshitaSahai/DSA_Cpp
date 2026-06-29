class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int n0=st.size();
        if(n0<3) return *st.rbegin();
        auto it=st.rbegin();
        advance(it, 2);//moves to 3rd last value from the end as rbegin points to the last value 
        return *it;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        int i=0, j=0;
        set<int> s;
        sort(nums1.begin(),nums1.end()); sort(nums2.begin(), nums2.end());
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                s.insert(nums1[i]);
                i++; j++;
            }else{
                if(nums1[i]>nums2[j] && j!=n2-1) j++;
                else i++;
            }
        }
        vector<int> v(s.begin(),s.end());//copying all elements from set to vecotr v
        return v;
    }
};
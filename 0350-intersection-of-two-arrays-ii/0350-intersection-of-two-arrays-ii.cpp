class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        map<int,int> mpp1;
        map<int,int> mpp2;
        vector<int> v;
        for(int i=0;i<n1;i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            mpp2[nums2[i]]++;
        }
        int mini=INT_MAX;
        for(auto it:mpp1){
            if(mpp2.find(it.first)!=mpp2.end()){
                mini=min(mpp1[it.first],mpp2[it.first]);
                while(mini--){
                    v.push_back(it.first);
                }
            }
        }
        return v;
    }
};
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int cnt=0;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            // if(arr[i]!=arr[i+1]) cnt++;
            mpp[candyType[i]]++;
        }
        if(mpp.size()<=n/2) return mpp.size();
        return n/2;
    }
};
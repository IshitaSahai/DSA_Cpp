class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int cnt=0;
        // map<int,int> mpp;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            // if(arr[i]!=arr[i+1]) cnt++;
            s.insert(candyType[i]);
        }
        if(s.size()<=n/2) return s.size();
        return n/2;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int> mpp;
        int maxi=INT_MIN, l=0,r=0,maxfreq=0,changes=0;
        while(r<n){
            mpp[s[r]]++;
            maxfreq=max(maxfreq,mpp[s[r]]);
            changes=(r-l+1)-maxfreq;
            if(changes>k){
                mpp[s[l]]--;
                maxfreq=0;
                l++;
            }
            if(changes<=k){
                maxi=max(maxi,r-l+1);
            }
            r++;
        }
        return maxi;
    }
};
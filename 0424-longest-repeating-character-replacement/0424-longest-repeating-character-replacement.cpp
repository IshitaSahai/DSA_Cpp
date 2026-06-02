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
            if(changes>k){//no need for while loop as no need to trim it dowm to too small length as the next answer would be the one that would be >=maxi ie. the maxlen so no need to trim it down till <maxi
                mpp[s[l]]--;
                maxfreq=0;//no need to update maxfreq to a smaller value than the already present max value
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
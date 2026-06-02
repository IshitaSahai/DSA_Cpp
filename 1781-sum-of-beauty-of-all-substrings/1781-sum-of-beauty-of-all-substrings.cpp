class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int beauty=0, sum=0;
        for(int i=0;i<n;i++){
            int hash[26]={0};
            for(int j=i;j<n;j++){
                int maxfreq=0, minfreq=INT_MAX;
                hash[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(hash[k]>0){
                        maxfreq=max(maxfreq,hash[k]);
                        minfreq=min(minfreq,hash[k]);
                    }
                }
                beauty=maxfreq-minfreq;
                sum+=beauty;
            }
        }
        return sum;
    }
};
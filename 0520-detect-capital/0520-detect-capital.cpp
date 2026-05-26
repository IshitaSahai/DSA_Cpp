class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length(), cnt=0, idx=-1;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                cnt++;
                idx=i;
            }
        }
        if(n==cnt || cnt==0 || (cnt==1 && idx==0)) return true;
        return false;
    }
};